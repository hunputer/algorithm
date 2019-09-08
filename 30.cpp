/*#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	int a[1000] = {};
	cin >> n;

	int count = 0;
	int i = 0;
	while (n > 0) {
		a[i] = n % 10;
		n = n / 10;
		i++;
		count++;
	}

	int ans = 0;
	for (int i = 0; i <= count; i++) {
		if (a[i] != 0) {
			ans += a[i];
		}
	}

	sort(a, a + count, [](int u, int v) {
		return u < v;
		});

		if (ans % 3 == 0) {
			for (int i = count -1; i >= 0; i--) {
				cout << a[i];
			}
		}
		else {
			cout << "-1" << endl;
		}
	}*/
