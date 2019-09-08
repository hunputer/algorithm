/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100] = {};
	int b[100] = {};
	int ans = 0;
	int ans2 = 0;
	int ans3 = 0;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	sort(a, a+n);

	for (int i = 2; i <= n+1; i++) {
		if (a[i - 1] != a[i]) {
			if (ans > ans2) {
				ans2 = ans;
				ans3 = a[i - 1];
			}
			ans = 1;
		}
		else {
			ans++;
		}
	}
	cout << ans3 << endl;
}*/