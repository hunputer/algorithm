/*#include<iostream>

using namespace std;

int d[100][100];
int s[101];
int a[101];

int main() {
	memset(d, 0, sizeof(d));
	int m;
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= m; i++) {
		s[i] = s[i-1] + a[i];
	}

	for (int i = m; i >= 1; i--) {
		for (int j = i; j <= m; j++) {
			for (int k = i; k <= j - 1; k++) {
				int temp = d[i][k] + d[k + 1][j] + s[j] - s[i - 1];
				if (d[i][j] == 0 || d[i][j] > temp) {
					d[i][j] = temp;
				}
			}
		}
	}

	cout << d[1][m];
}*/