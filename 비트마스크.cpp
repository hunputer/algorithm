/*#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans;
	cin >> ans;
	int c = 0;
	int count = 0;
	int a[100] = {};
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	do {
		for (int i = 0; i < n; i++) {
			c = c * 10 + a[i];
		}
		count += 1;
		if (ans == count) {
			break;
		}
	} while (prev_permutation(a.begin(), a.end());

	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}*/