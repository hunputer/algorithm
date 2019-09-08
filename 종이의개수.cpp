/*#include<iostream>
#include<algorithm>

using namespace std;
int a[100][100];
int cnt[3];

bool equal(int x, int y, int c) {
	for (int i = x; i < x + c; i++) {
		for (int j = y; j < y + c; j++) {
			if (a[x][y] != a[i][j]) {
				return false;
			}
		}
	}
	return true;
}

void check(int x, int y, int c) {
	if (equal(x, y, c)) {
		cnt[a[x][y] + 1] += 1;
		return ;
	}
	int m = c / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			check(x + i * m,y + j * m, m);
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	check(0, 0, n);

	for (int i = 0; i < 3; i++) {
		cout << cnt[i] << endl;
	}

}*/