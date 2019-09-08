/*#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int d[100][100];
int parent[100];
int depth[100];
bool check[100];
vector<int> a[100];

int lca(int u, int v) {
	if (depth[u] < depth[v]) {
		swap(u, v);
	}
	int log = 1;
	for (log = 1; (1 << log) <= depth[u]; log++);
	log -= 1;
	for (int i = log; i >= 0; i--) {
		if (depth[u] - (1 << i) >= depth[v]) {
			u = d[u][i];
		}
	}
	if (u == v) {
		return u;
	}
	else {
		for (int i = log; i >= 0; i--) {
			if (d[u][i] != 0 && d[u][i] != d[v][i]) {
				u = d[u][i];
				v = d[v][i];
			}
		}
		return parent[u];
	}
}

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m-1; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	
	parent[1] = 0;
	depth[1] = 0;
	check[1] = true;
	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (!check[y]) {
				parent[y] = x;
				depth[y] = depth[x] + 1;
				check[y] = true;
				q.push(y);
			}
		}
	}

	for (int i = 1; i <= m; i++) {
		d[i][0] = parent[i];
	}

	for (int j = 1; (1 << j) < m; j++) {
		for (int i = 1; i <= m; i++) {
			if (d[i][j - 1] != 0) {
				d[i][j] = d[d[i][j - 1]][j - 1];
			}
		}
	}

	int n;
	cin >> n;
	while (n--) {
		int u, v;
		cin >> u >> v;
		cout << lca(u, v) << endl;
	}


}*/