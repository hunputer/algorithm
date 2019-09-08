/*#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> calc(vector<vector<int>>& a, vector<vector<int>>& b) {
	int m = a.size();
	vector<vector<int>> c(m, vector<int>(m));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			c[i][j] = 0;
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
			c[i][j] = c[i][j] % 1000;
		}
	}

	return c;
}


int main() {
	int m, n;
	cin >> m >> n;
	vector<vector<int>> a(m, vector<int>(m));
	vector<vector<int>> b(m, vector<int>(m));


	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
		b[i][i] = 1;
	}

	while (n > 0) {
		if (n % 2 == 1) {
			b = calc(b, a);
		}
		a = calc(a, a);
		n = n / 2;
	}

	for (int i = 0; i < b.size(); i++) {
		for (int j = 0; j < b[i].size(); j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

}*/