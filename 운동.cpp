/*#include<iostream>
#include<algorithm>

using namespace std;

int d[100][100];
int ans[100];

int main() {
	int m, n;
	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		d[x][y] = z;
	}

	for (int k = 1; k <= m; k++) {
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= m; j++) {
				if (d[i][k] != 0 && d[k][j] != 0) {
					if (d[i][j] == 0) {
						d[i][j] = d[i][k] + d[k][j];
					}
					else {
						d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
					}
				}
			}
		}
	}
	int n1 = 0;
	for (int k = 1; k <= m; k++) {
		for (int i = 1; i <= m; i++) {
				if (d[i][k] != 0 && d[k][i] != 0) {
					ans[n1++] = d[i][k] + d[k][i];
			}
		}
	}
	int ans2 = 1000000;
	for (int i = 0; i < n1; i++) {
		if (ans2 > ans[i]) {
			ans2 = ans[i];
		}
	}

	cout << ans2 <<  endl;
}*/