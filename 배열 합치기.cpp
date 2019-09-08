/*#include<iostream>
#include<algorithm>

using namespace std;

int a[100];
int b[100];
int c[100];

int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a, a + m);
	sort(b, b + n);

	int i = 0; int j = 0; int k = 0;
	while (i < m && j < n) {
		if (a[i] <= b[j]) {
			c[k++] = a[i++];
		}
		else {
			c[k++] = b[j++];
		}
	}

    while(i < m) c[k++] = a[i++];
	while(j < n) c[k++] = b[j++];

	for (int i = 0; i < k; i++) {
		cout << c[i];
	}

}*/