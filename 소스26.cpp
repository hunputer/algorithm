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

	for (int i = 0; i < n; i++) {
		d[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j] && d[i] < d[j] + 1) {
				d[i] = d[j] + 1;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i <= n; i++) {
		ans = max(ans, d[i]);
	}
	cout << ans;
}*/