/*#include<iostream>
#include<vector>

using namespace std;

vector<vector<long long>> calc(vector<vector<long long>>& a, vector<vector<long long>>& b) {
	int m = a.size();
	vector <vector<long long>> c(m, vector<long long>(m));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			c[i][j] = 0;
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
			c[i][j] = c[i][j] % 1000000007;
		}
	}

	return c;
}

int main() {
	int n;
	cin >> n;
	long long m = 2;
	vector<vector<long long>> ans(m, vector<long long>(m));
	vector<vector<long long>> a(m, vector<long long>(m));

	a[0][0] = 1;
	a[0][1] = 1;
	a[1][0] = 1;
	a[1][1] = 0;
	ans[0][0] = 1;
	ans[0][1] = 0;
	ans[1][0] = 0;
	ans[1][1] = 1;

	while (n > 0) {
		if (n % 2 == 1) {
			ans = calc(ans, a);
		}
		a = calc(a, a);
		n = n / 2;
	}

	cout << ans[0][1] << endl;
}*/