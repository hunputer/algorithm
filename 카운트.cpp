/*#include<iostream>
#include<algorithm>

using namespace std;

int a[100];
int b[100];

int main() {
	int m;
	cin >> m;
	int count = 0;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}

	int mid = (0 + m-1) / 2;
	int end = m-1;
	sort(a, a + mid);
	sort(a + mid + 1, a + end);

	int i = 0; int j = mid + 1; int k = 0;
	while (i <= mid && j <= end) {
		if (a[i] <= a[j]) {
			b[k++] = a[i++];
		}
		else {
			count += 1;
			b[k++] = a[j++];
		}
	}
	while (i <= mid) { b[k++] = a[i++]; count += 1; }
	while (j <= end) {
		b[k++] = a[j++];
	}

	cout << count << endl;
}*/