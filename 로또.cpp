/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {
	int n;
	cin >> n;
	int ans = 0;
	vector<int> a(n);
	vector<int> b(10);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	do {
		if (a[0] <= a[1] && a[1] <= a[2] && a[2] <= a[3] && a[3] <= a[4] && a[4] <= a[5]) {
			for (int i = 0; i < 6; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}

	} while (next_permutation(a.begin(), a.end()));

}*/