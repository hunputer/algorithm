/*#include<iostream>

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
				if (d[i][k] == 1 && d[k][j] == 1 ) { 
					d[i][j] = 1;
				}
			}
		}
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= m; j++) {
			cout << d[i][j];
		}
		cout << endl;
	}
	
}*/