/*#include<iostream>

using namespace std;

int main() {
	int d[100] = {};
	int n;
	cin >> n;

	for (int i = 4; i <= n; i+=2) {
		d[0] = 0;
		d[1] = 0;
		d[2] = 3;
		d[i] += 3 * d[i - 2];
		for (int j = 4; j < n; j+=2) {
			if(i>j)
			d[i] += 2 * d[i - j];
		}
	}

	cout << d[n];
}*/