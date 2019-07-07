/*#include<iostream>

using namespace std;

int main() {
	int n;
	int d[100] = {};
	int a[100] = {};
	cin >> n;
	int count = 1;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i < n ; i++) {
		if (a[i] >= 1 &&  a[i+1] >= 0)
		{  if(a[i] <= 2 && a[i + 1] <= 6)
			count++;
		}
	}

	cout << count;
}*/