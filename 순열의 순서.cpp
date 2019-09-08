#include<iostream>

using namespace std;

int main() {
	int count = 0;
	int E, S, M;
	cin >> E >> S >> M;
	int i = 0;
	int a = 0; int  b = 0; ,int  c = 0;
	while (1) {
		a += 1;
		b += 1;
		c += 1;
		if (a == 16) {
			a = 1;
		}
		if (b == 29) {
			b = 1;
		}
		if (c == 19) {
			c = 1;
		}
		if (E == a && S == b && M == c) {
			break;
		}
		count += 1;
	}

	cout << count << endl;
}