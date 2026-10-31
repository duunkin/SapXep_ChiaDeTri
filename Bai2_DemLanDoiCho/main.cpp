#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &a, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bubbleSort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i + 1 == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);

    solve();
    return 0;
}