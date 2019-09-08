/*#include<iostream>

using namespace std;

bool d[100][100];
int a[100];
int b[100];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	int k;
	cin >> k;
	while (k--) {
		int s, e;
		cin >> s >> e;
		int k = s;
		for (int i = e; i >= s; i--) {
			b[k++] = a[i];
		}
		bool ans;
		for (int i = s; i <= e; i++) {
			if (a[i] != b[i]) {
				ans = false;
			}
			else {
				ans = true;
			}
		}
		cout << (ans ? "1" : "0") << endl;
	}
	
}*/