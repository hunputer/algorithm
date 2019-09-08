/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check(vector<int>& a, int m, int mid) {
	int ans = 0;
	for (int i = 0; i < a.size(); i++) {
		if ((a[i] - mid) > 0) {
			ans += a[i] - mid;
		}
	}
	if (ans == m) {
		return true;
	}
	else{
		return false;
	}
}

void cut(vector<int>& a, int m, int max, int& ans) {
	int left = 0; int right = max;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(a, m, mid)) {
			right = mid - 1;
			ans = mid;
		}
		else {
			left = mid + 1;
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		int u;
		cin >> u;
		a.push_back(u);
	}
	int max1 = 0;
	for (int i = 0; i < a.size(); i++) {
		max1 = max(max1, a[i]);
	}
	int ans = 0;
	cut(a, m, max1, ans);
	cout << ans << endl;

}*/