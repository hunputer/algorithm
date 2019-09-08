/*#include<iostream>
#include<algorithm>

using namespace std;

int d[100][100] = {};
int a[100][100];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}

	d[1][1] = 0;

	for (int i = 1 + a[1][1]; i <= n; i++) {
		for (int j = 1 + a[1][1]; j <= n; j++) {
			if (d[i + a[i][j]][j] >= 0) {
				d[i + a[i][j]][j] = d[i][j] + 1;
			}
			if (d[i][j + a[i][j]] >= 0) {
				d[i][j + a[i][j]] = d[i][j] + 1;
			}
		}
	}

	cout << d[n][n] << endl;
}*/