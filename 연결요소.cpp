/*#include<iostream>
#include<vector>

using namespace std;
vector<int> a[50];
bool check[1000];
void dfs(int x) {
	check[x] = 1;
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		if (check[y] == 0) {
			dfs(y);
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
	int component = 0;
	for (int i = 1; i <= n; i++) {
		if (check[i] == 0) {
			dfs(i);
			component += 1;
		}
	}
	cout << component << endl;
}*/