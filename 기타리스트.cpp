/*#include<iostream>

using namespace std;

int d[100][100];
int v[100];

int main() {
	int n, s, m;
	cin >> n >> s >> m;

	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	d[0][s] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (j + v[i] <= m) {
				d[i][j + v[i]] += d[i-1][j];
			}
			if (j - v[i] >= 0) {
				d[i][j - v[i]] += d[i - 1][j];
			}
		}
	}
	int ans = 0;
	for (int i = m; i >= 0; i--) {
		if (d[n][i] > 0) {
			ans = i;
			break;
		}
	}

	cout << ans << endl;
}*/