/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool possible(vector<int>& a, int c, int x) {
	int cnt = 1;
	int last = a[0];
	for (int i = 0; i < a.size();i++) {
		if (a[i] - last >= x) {
			cnt += 1;
			last = a[i];
		}
	}
	return cnt >= c;
}

int main() {
	int n, c;
	cin >> n >> c;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	int l = 1;
	int r = a[n - 1] - a[0];

	int ans = l;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (possible(a, c, mid)) {
			if (ans < mid) {
				ans = mid;
			}
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}

	cout << ans << endl;
}*/