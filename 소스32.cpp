/*#include<iostream>

using namespace std;

int main() {
	int d[100][100] = {};
	int n, t;
	cin >> n >> t;

	for (int i = 1; i <= t; i++) {
		d[1][i] = i;
	}

	for (int i = 2; i <= n; i++) {
		d[i][t] = d[i - 1][t] + t - 1;
	}

	cout << d[n][t];
}*/