/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check(vector<int>& a, int n, int mid) {
	int ans = 0;
	 for (int i = 0; i < a.size(); i++) {
		 ans += a[i] / mid;
	 }
	 if (ans == n){
		 return true;
	 }
	 else {
		 return false;
	 }
}

void cut(vector<int>& a, int n, int max, int& ans) {
	int left = 0; int right = max;
	while (left <= right) {
		int mid = (right + left) / 2;
		if (check(a,n,mid)) {
			left = mid + 1;
			ans = mid;
		}
		else {
			right = mid - 1;
		}
	}

}

int main() {
	int m, n;
	int max1 = 0;
	cin >> m >> n;
	vector<int> a(m);
	for (int i = 0; i < m; i++) {
		int v;
		cin >> v;
		a.push_back(v);
	}
	for (int i = 0; i < a.size(); i++) {
		max1 = max(max1, a[i]);
	}
	int ans = 0;
	cut(a, n, max1,ans);

	cout << ans << endl;

}*/