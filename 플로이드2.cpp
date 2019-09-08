/*#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int d[100][100];
int c[100][100];

int main() {
	int m;
	cin >> m;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (d[a][b] == 0) {
			d[a][b] = c;
		}
		else {
			d[a][b] = min(d[a][b], c);
		}
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= m; j++) {
			c[i][j] = j;
		}
	}

	for (int k = 1; k <= m; k++) {
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= m; j++) {
				if (i == j) continue;
				if (d[i][k] != 0 && d[k][j] != 0) {
					if (d[i][j] == 0) {
						d[i][j] = d[i][k] + d[k][j];
						c[i][j] = c[i][k];
					}
					else {
						d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
						c[i][j] = c[i][k];
					}
				}
			}
		}
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= m; j++) {
			cout << d[i][j] << " ";
		}
		cout << endl;
	}
}*/