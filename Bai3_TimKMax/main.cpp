#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	priority_queue<long long, vector<long long>, greater<long long>> min;
	for (int i = 0; i < n; i ++) {
		long long x;
		cin >> x;
		if ((int)min.size() < k) {
			min.push(x);
		} else if (x > min.top()) {
			min.pop();
			min.push(x);
		}
	}
	vector <long long> ans;
	while (!min.empty()) {
		ans.push_back(min.top());
		min.pop();
	}
	reverse(ans.begin(), ans.end());
	for (int i = 0; i < k; i ++) {
		cout << ans[i] << (i + 1 == k ? "": " ");
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