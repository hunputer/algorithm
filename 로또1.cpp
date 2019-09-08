/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool check(vector<int> a) {
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		if (a[i] < a[i + 1]) {
			ans += 1;
		}
	}

	if (ans == 5) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int m;
	cin >> m;
	vector<int> a(m);
	vector<int> b(6);
	vector<int> c(6);
	
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	do {
		for (int i = 0; i < 6; i++) {
			b[i] = a[i];
	    }

		if (check(a)) {
			if (b != c) {
				for (int i = 0; i < 6; i++) {
					cout << a[i] << " ";
					c[i] = a[i];
				}
				cout << endl;
			}
		}
	} while (next_permutation(a.begin(), a.end()));
	
}*/