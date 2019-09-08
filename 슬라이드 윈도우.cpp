#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int a[100];

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	int l = 3;

	deque<pair<int, int>> d;
	vector<int> ans(m);
	for (int i = 0; i < m; i++) {
		int cur = a[i];
		if (!d.empty() && i - d.front().second >= l) {
			d.pop_front();
		}
		while (!d.empty() && d.back().first > cur) {
			d.pop_back();
		}
		d.push_back(make_pair(cur, i));
		ans[i] = d.front().first;
	}

	cout << ans[4] << endl;

}

