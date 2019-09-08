/*#include<iostream>
#include<algorithm>

using namespace std;

int a[10000] = {};

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n, [](int a, int b) {
		return a > b; });

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= 0 || a[i+1] <= 0) {
			ans += a[i];
		}
		else {
			ans += a[i] * a[i + 1];
			a[i + 1] = 0;
		}
	}

	cout << ans << endl;

	
}*/