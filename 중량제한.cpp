/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> a[100];
int len[100][100] = {};
bool check[100];
int ans[100];
int dfs(int node, int limit) {
	check[node] = true;
	int ans = 0;
	for (int i = 0; i < a[node].size(); i++) {
		int y = a[node][i];
		if (check[y] == false && len[node][y] >= limit) {
			ans = len[node][y];
			dfs(y, ans);
		}
	}
	return ans;
}

int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		a[u].push_back(v); a[v].push_back(u);
		len[u][v] = w; len[v][u] = w;
	}
	int t, b;
	cin >> t >> b;
	int ans = 0;
	
	for (int i = 0; i < a[t].size(); i++) {
		ans = max(ans, dfs(t, 0));
		check[t] = false;
		check[b] = false;
	}



	cout << ans << endl;



}*/