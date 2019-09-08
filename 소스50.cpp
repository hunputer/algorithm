/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> p(n);
	
	for (int i = 0; i < n; i++) {
		cin >> p[i].first;
		p[i].second = (i+1);
	}

	sort(p.begin(), p.end());

	int ans = 0;

	for (int i = 0; i < n; i++) {
		if ((p[i].second - (i+1)) > ans) {
			ans = p[i].second - (i+1);
		}
	}

	cout << ans+1 << endl;
}*/