/*#include<iostream>
#include<queue>
#include<vector>

using namespace std;

bool check[100];
int parent[100];
int depth[100];
vector<int> a[100];

int lca(int u, int v) {
	if (depth[u] < depth[v]) {
		swap(u, v);
	}
	while (depth[u] != depth[v]) {
		u = parent[u];
	}
	while (u != v) {
		u = parent[u];
		v = parent[v];
	}
	return u;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}

	parent[1] = 0;
	check[1] = true;
	depth[1] = 0;
	queue<int> q;
	q.push(1);
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		for (int y : a[x]) {
			if (!check[y]) {
				depth[y] = depth[x] + 1;
				parent[y] = x;
				check[y] = true;
				q.push(y);
			}
		}
	}

	int m;
	cin >> m;
	while (m--) {
		int u, v;
		cin >> u >> v;
		cout << lca(u, v) << endl;
	}
}*/