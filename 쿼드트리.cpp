/*#include<iostream>

using namespace std;
int a[100][100];
int cnt[2];

bool same(int x, int y, int c) {
	for (int i = x; i < x + c; i++) {
		for (int j = y; j < y + c; j++) {
			if (a[x][y] != a[i][j]) {
				return false;
			}
		}
	}
	return true;
}

void solve(int x, int y, int c) {
	if (same(x, y, c)) {
		cout << a[x][y];
	}
	else {
		cout << "(";
		int k = c / 2;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				solve(x + i * k, y + j * k, k);
			}
		}
		cout << ")";
	}
}

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	solve(0, 0, m);
}*/