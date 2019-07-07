/*#include<iostream>

using namespace std;

int main() {
	int d[100] = {};
	int n;
	cin >> n;
	d[1] = 1;
	d[2] = 1;
	d[3] = 1;
	d[4] = 2;
	for (int i = 5; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 5];
	}

	cout << d[n];
}*/