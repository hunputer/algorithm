/*#include<Iostream>
#include<algorithm>

using namespace std;

int d[1000][1000];
int a[1000][1000];

int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}

	d[1][1] = a[1][1];

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (d[i + 1][j] <= d[i][j] + a[i + 1][j]) {
				d[i + 1][j] = d[i][j] + a[i + 1][j];
			}
			if (d[i][j+1] <= d[i][j] + a[i][j+1]) {
				d[i][j+1] = d[i][j] + a[i][j+1];
			}
			if (d[i+1][j+1] <= d[i][j] + a[i + 1][j+1]) {
				d[i + 1][j+1] = d[i][j] + a[i + 1][j+1];
			}
		}
	}

	cout << d[m][n];
}*/