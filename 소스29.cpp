/*#include<iostream>
#define max(a,b) (((a)>(b))?(a):(b))

using namespace std;

int main(){
	int d[50] = {};
	int a[50] = {};
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	d[0] = 0;
	d[1] = a[1];
	for (auto i = 2; i <= n; i++) {
		d[i] = max(d[i - 1] + a[i], a[i]);
	}

	int ans = 0;
	for (int i = 0; i <= n; i++)
		ans = max(ans, d[i]);

	cout << ans;
}*/