/*#include<iostream>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int n;
	int a[100] = {};
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (i != j) {
				ans += gcd(a[i], a[j]);
			}
		}
	}

	cout << ans;

}*/