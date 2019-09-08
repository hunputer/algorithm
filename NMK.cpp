/*#include<iostream>
#include<algorithm>

using namespace std;

bool cmt(int x, int y) {
	return x > y;
}

int a[1000] = {};

int main() {
	int u, d, b;
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) {
		a[i-1] = i;
	}

	u = n / m;

	sort(a, a + k, cmt);

	for (int i = k ; i <= n; i += u) {
		sort(a + i, a + i + u, cmt);
	}

	if (m + k - 1 <= n && m * k >= n) {
		for (int i = 0; i < n; i++) {
			cout << a[i];
		}
	}
	else {
		cout << "-1" << endl;
	}

}*/
