/*#include<iostream>

using namespace std;
int ans = 0;
int a[20] = {};
void go(int count, int sum, int goal, int i) {
	if (i > 1) {
		if (sum == goal) {
			ans += 1;
			return;
		}
	}
	if (count-1 < i) return;
	go(count, sum + a[i], goal, i + 1);
	go(count, sum, goal, i + 1);
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	go(n, 0, m, 0);
	if (m == 0) ans = ans - 1;

	cout << ans << endl;
}*/