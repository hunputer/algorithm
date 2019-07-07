#include<iostream>

using namespace std;

int main() {
	int a[500] = {};
	int k;
	int n = 0;
	cin >> k;
	int count = 0;

	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}

	for (int z = 1; z <= k; z++) {
		for (int i = 2; i * i <= n; i++) {
			while (n % i == 0) {
				n = a[i];
				n /= i;
			}
		}
		if (n > 1) {
			cout << n << endl;
		}
	}


}