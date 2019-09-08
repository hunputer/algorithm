/*#include<iostream>

using namespace std;

#define star 1
#define blank 0
char a[100][100] = {};

void solve(int x, int y, int c, int color) {
	int newcolor;
	if (color == blank) {
		for (int i = x; i < x + c; i++) {
			for (int j = y; j < y + c; j++) {
				a[i][j] = ' ';
			}
		}
	}
	else {
		if (c == 0) {
			a[x][y] = '*';
		}
		else {
			int m = c / 3;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (i == 1 && j == 1) {
						newcolor = blank;
					}
					else {
						newcolor = star;
					}
					solve(x + i * m, y + j * m, m, newcolor);
				}
			}

		}
	}
}

int main() {
	int m;
	cin >> m;
	solve(0, 0, m, star);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
}*/

