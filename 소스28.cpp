/*#include<iostream>
#define max(a,b) (((a)>(b))?(a):(b))

using namespace std;

int main() {
	int d[100] = {};
	int a[100] = {};
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	d[0] = a[0];
	for (int i = 0; i < n; i++) {
		d[i] = max(d[i - 1] + a[i], a[i]);
		}
	int ans = 0;

	for (int i = 0; i <= n; i++) {
		ans = max(ans, d[i]);
	}
	cout << ans;
	}*/