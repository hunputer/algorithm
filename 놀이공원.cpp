/*#include<iostream>

using namespace std;

int main() {
	int a[100] = {};
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	int ans = 0;
	int k = 1;
	n = n - m;
	while (n > 0) {
		for (int i = 0; i < m; i++) {
			 n = n - (k / a[i]);
			if (n <= 0) {
				ans = a[i];
				
				break;
			}
		}
		k++;
	}

	cout << ans << endl;
}*/