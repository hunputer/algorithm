/*#include<iostream>

using namespace std;

int a[100];

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int count = 0;
	int right = 0;
	int left = 0;
	int ans = a[left];
	while (right < n) {
		if (m > ans) {
			right += 1;
			ans += a[right];
		}
		else if (m == ans) {
			count += 1;
			right += 1;
			ans += a[right];
		}
		else if (m < ans) {
			left += 1;
			right = left;
			ans = a[left];
		}
	}

	cout << count << endl;
}*/