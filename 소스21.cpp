/*#include<iostream>

using namespace std;

int main() {
	int d[50][50] = {};
	int n;
	cin >> n;

	for (int i = 0; i <= 9; i++) {
		d[1][i] = 1;
	}
	
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 10; j++) {
			d[i][j] = 0;
			for (int z = 0; z <= j; z++) {
					d[i][j] += d[i - 1][z];
			}
		}
		}

	long long ans = 0;
	for (int i = 0; i <= 9; i++) {
		ans += d[n][i];
	}
	cout << ans << endl;
}*/