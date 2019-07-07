/*#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a;
	int p[100] = {};
	int pn = 0;
	bool c[101] = {};
	int n = 100;
	for (int i = 2; i <= n; i++) {
		if (c[i] == false) {
			p[pn] = i;
			pn++;
			for (int j = i * i; j <= n; j += i) {
				c[j] = true;
			}
		}
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (p[i] + p[j] == a) {
				cout << a << "=" << p[j] << "+" << p[i] << endl;
			}
		}
	}

}*/