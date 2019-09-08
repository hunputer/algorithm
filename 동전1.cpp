/*#include<iostream>

using namespace std;

int d[100];
int a[100];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	d[0] = 1;

	for (int j = 0; j < n; j++) {
		for (int i = 1; i <= m; i++) {
			if (i - a[j] >= 0) {
				d[i] += d[i - a[j]];
			}
		}
	}

	cout << d[m] << endl;
}*/