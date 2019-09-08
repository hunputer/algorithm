/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	int w[100][100] = {};
	vector<int> d(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> w[i][j];
		}
	}
	for (int i = 0; i < n ; i++) {
		d[i] = i;
	}
	int ans1 = 100000;

	sort(d.begin(), d.end());

	do {
		ans = 0;
		for (int i = 0; i < d.size()-1; i++) {
			if (w[d[i]][d[i + 1]] == 0) {
				ans = 10000;
				break;
			}
			else {
				ans += w[d[i]][d[i + 1]];
			}
		}

		if (w[d[d.size() - 1]][d[0]] != 0) {
			ans += w[d[d.size()-1]][d[0]];
		}
		else {
			ans = 10000;
		}

		if (ans != 0) {
			ans1 = min(ans1, ans);
		}
	} while (next_permutation(d.begin(), d.end()));
	cout << ans1 << endl;
}*/