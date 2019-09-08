/*#include<iostream>

using namespace std;

void solve(int n, int x, int y) {
	if (n == 0) {
		return;
	}
	solve(n - 1, x, 6 - x - y);
	cout << x << y << endl;
	solve(n - 1, 6 - x - y, y);
}

int main() {
	int n;
	cin >> n;
	int ans = 1;
	for (int i = 0; i < n; i++) {
		ans = ans * 2;
	}
	cout << ans - 1 << endl;
	solve(n, 1, 3);

}*/