/*#include<iostream>
#include<algorithm>

using namespace std;

int d[100][100];

int main() {
	int m;
	cin >> m;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> d[i][j];
		}
	}

	for (int k = 1; k <= m; k++) {
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= m; j++) {
				if (d[i][k] != 0 && d[k][j] != 0) {
					if (d[i][j] == d[i][k] + d[k][j]) {
						d[i][j] = 0;
					}
				}
			}
		}
	}

	int ans = 0; 
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= m; j++) {
			ans += d[i][j];
		}
	}

	cout << ans / 2 << endl;
}*/