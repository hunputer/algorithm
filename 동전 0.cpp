/*#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[100];
	int n, money;
	cin >> n >> money;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = n-1; i >= 0; i--) {
		while (money >= a[i]) {
			money = money - a[i];
			ans++;
		}
	}

	cout << ans << endl;
}*/