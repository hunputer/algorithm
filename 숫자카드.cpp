/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a[100] = {};
int b[100] = {};
int ans[10];
int k = 0;

void search1(int left, int right, int& x) {
	k += 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] == x) {
			ans[k] = 1;
			break;
		}
		else if (a[mid] < x) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);

	for (int i = 0; i < m; i++) {
		search1(0, n, b[i]);
	}

	
	for (int i = 1; i <= m; i++) {
		cout << ans[i];
	}
}*/