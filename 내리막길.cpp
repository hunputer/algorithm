/*#include<iostream>
#include<algorithm>

using namespace std;

int d[100][100];
int a[100][100];
int X[4] = { 0,0,1,-1 };
int Y[4] = { 1,-1,0,0 };

int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	d[1][1] = 1;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			for (int z = 0; z < 4; z++) {
				if (a[i][j] > a[i + X[z]][j + Y[z]]) {
					if ((i + X[z]) >= 0 && (i + X[z]) <= m && (j + Y[z]) >= 0 && (j + Y[z]) <= n) {
						d[i][j] += d[i + X[z]][j + Y[z]];
					}
				}
			}
		}
	}
    
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cout << d[i][j];
		}
		cout << endl;
	}
	cout << d[m][n] << endl;
}*/