/*#include<iostream>
#include<vector>

using namespace std;
vector<int> a[50];
bool check[1000];
void dfs(int x, int c) {
	check[x] = c;
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		if (check[y] == 0) {
			dfs(y, 3-c);
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v); a[v].push_back(u);
	}
	bool ok  = true;
	for (int i = 1; i <= n; i++) {
		for (int k = 0; k < a[i].size(); k++) {
			int y = a[i][k];
			if (check[i] == check[y]) {
				ok = false;
			}
		}
	}
	cout << (ok? "yes":"No") << endl;
}*/