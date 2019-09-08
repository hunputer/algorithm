/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int add(vector<int> a,int n){
	int ans = 0;
	for (int i = 0; i < n-1; i++) {
		ans += abs(a[i + 1] - a[i]);
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	int ans = 0;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	do {
		ans = max(ans, add(a,n));
	} while (next_permutation(a.begin(), a.end()));
	cout << ans << endl;
}*/