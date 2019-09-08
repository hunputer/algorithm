/*#include<iostream>

using namespace std;

int d[100];
char a[100];
bool c[100][100];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) c[i][i] = true;
	for (int i = 1; i <= n-1; i++) {
		if (a[i] == a[i + 1]) {
			c[i][i + 1] = true;
		}
	}
	for (int k = 3; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			int j = i + k - 1;
			if (a[i] == a[j] && c[i - 1][j - 1]) {
				c[i][j] == true;
			}
		}

	}
}*/