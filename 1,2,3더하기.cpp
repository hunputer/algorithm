/*#include<iostream>

using namespace std;

int d[100] = {};
int a[100] = {};

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k = 0;
	int q = n;

	d[4] = 7;
	d[5] = 13;
	d[6] = 24;

	while (q--) {
		for (int i = 7; i <= a[k]; i++) {
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		}
		k += 1;
	}
	
	for (int i = 0; i < n; i++) {
		cout << d[a[i]] << endl;
	}
}*/