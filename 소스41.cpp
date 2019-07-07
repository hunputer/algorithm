/*#include<iostream>

using namespace std;

bool so(int a) {
	if (a < 2) {
		return false;
	}
		for (int i = 2; i * i <= a; i++) {
			if (a / i == 0) {
				return false;
			}
		}
	return true;
}

int main() {
	int n;
	cin >> n;
	int count = 0;
	int d[1000] = {};
	int i = 0;

	while (n > 0) {
		cin >> d[i];
		if (so(d[i]) == true) {
			count++;
		}
		n--;
		i++;
	}

	cout << count << endl;

}*/