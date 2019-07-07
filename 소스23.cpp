/*#include<iostream>
#include<algorithm>
#define max(a,b) (((a)>(b))?(a):(b))

using namespace std;

int main() {
	int d[50][2];
	int a[10];
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	d[0][0] = d[0][1] = d[0][2] = 0;
	for (int i = 1; i <= n; i++) {
		d[i][0] = max(d[i - 1][0],max(d[i - 1][1], d[i - 1][2]));
		d[i][1] = d[i - 1][0] + a[i];
		d[i][2] = d[i - 1][1] + a[i];
	}
	
	long long ans = 0;
	for (int i = 1; i <= n; i++) {
		ans = max((d[i - 1][0], ans), max(d[i - 1][1], d[i - 1][2]));
	}
	cout << ans;
}*/
