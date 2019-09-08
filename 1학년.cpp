/*#include<iostream>

using namespace std;

int d[100][100] = {};
int a[100];

int main() {
	int m;
	cin >> m;
	for (int i = 1; i < m; i++) {
		cin >> a[i];
	}
	int goal;
	cin >> goal;

	d[1][a[1]] = 1;

	for (int i = 1; i < m; i++) {
		for (int j = 0; j <= 20; j++) {
			if (j + a[i+1] <= 20) {
				d[i+1][j + a[i+1]] += d[i][j];
			}
			if (j - a[i+1] >= 0) {
				d[i+1][j - a[i+1]] += d[i][j];
			}
		}
	}
	cout << d[m-1][goal] << endl;
}*/