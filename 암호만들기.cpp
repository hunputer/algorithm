/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool check1(vector<string> a, int n) {
	int ans = 0;
	for (int i = 0; i < n-1; i++) {
		if (a[i] < a[i + 1]) {
			ans += 1;
		}
	}
	if (ans == n-1) {
		return true;
	}
	else {
		return false;
	}
}

bool check(vector<string> a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == "a" || a[i] == "e" || a[i] == "i" || a[i] == "o" || a[i] == "u") {
				return true;
		}
	}
	return false;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> a(m);
	vector<string> b(n);
	vector<string> c(n);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	do {
		for (int i = 0; i < n; i++) {
			b[i] = a[i];
	    }
		if (check(b, n)) {
			if (check1(b, n)) {
				if (c != b) {
					for (int i = 0; i < n; i++) {
						cout << b[i];
						c[i] = a[i];
					}
					cout << endl;
				}
			}
		}
	} while (next_permutation(a.begin(), a.end()));

}*/