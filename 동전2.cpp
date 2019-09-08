/*#include<iostream>
#include<algorithm>

using namespace std;

int a[100];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = 10000;

	sort(a, a + n, [](int x, int y) {
		return x > y; });

	for (int i = 0; i < n; i++) {
		if (m % a[i] == 0) {
			ans = min(ans, m / a[i]);
		}
	}


	int count = 0;
	int k = 0;

	for (int i = 0; i < n; i++) {
		count = 0;
		int p = m;
		k = k + 1;
		for (int j = k; j < n; j++) {
			count = count + (p / a[j]);
			p = p % a[j];
			if (p == 0) {
				cout << count << endl;
				ans = min(ans, count);
			}
		}
	}

	cout << ans << endl;
}*/