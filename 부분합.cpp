/*#include<iostream>

using namespace std;

int a[100];
int b[100];

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int count = 0;
	int right = 0;
	int left = 0;
	int k = 0;
	int ans = a[left];
	while (right < n) {
		if (m > ans) {
			right += 1;
			ans += a[right];
		}
		else if (m <= ans) {
			b[k++] = right - left + 1;
			left += 1;
			right = left;
			ans = a[left];
		}
	}
	int ans1 = 1000000;
	for (int i = 0; i < 100; i++) {
		if (b[i] != 0 && ans1 > b[i]) {
			ans1 = b[i];
		}
	}
	cout << ans1 << endl;
}*/