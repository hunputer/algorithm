/*#include<iostream>
#include<algorithm>

using namespace std;
int b[100] = {};

bool check(int x, int m) {
	while (x > 0) {
		int k = x % 10;
		for (int i = 0; i < m; i++) {
			if (k == b[i]) {
				return false;
			}
		}
		x = x / 10;
	}
	return true;
}

int main() {
	int x;
	cin >> x;
	int m;
	cin >> m;
	int q = m;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int ans = 0;
	int y = x; int z = x;

	while (1) {
		if (check(y, m) == true || check(z, m) == true) {
			break;
		}
		else {
			ans += 1;
			y += 1;
			z -= 1;
		}
	}

	int cnt = 0;
	while (x > 0) {
		x = x / 10;
		cnt += 1;
	}

	cout << ans+cnt << endl;
}*/