/*#include<iostream>
#include<algorithm>

using namespace std;

int d[100][100];
int c[100][100];
int ans[100];
int user = 0;
int user_level = 100000;

int main() {
	int m;
	cin >> m;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		d[a][b] = 1;
		d[b][a] = 1;
	}

	for (int k = 1; k <= m; k++) {
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= m; j++) {
				if (i == j) continue;
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

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= m; j++) {
			ans[i] += d[i][j];
		}
	}

	for (int i = 1; i <= m; i++) {
		if (user_level > ans[i]) {
			user_level = ans[i];
			user = i;
		}
	}

	cout << user << endl;

}*/