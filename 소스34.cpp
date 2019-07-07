/*#include<iostream>

using namespace std;

int main() {
	int d[100][100] = {};
	int n, k = 0;
	cin >> n >> k;

	for (int i = 0; i <= n; i++) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			for (int l = 0; l <= j; l++) {
				d[i][j] += d[i - 1][j - l];
			}
		}
	}

	cout << d[k][n];
}*/