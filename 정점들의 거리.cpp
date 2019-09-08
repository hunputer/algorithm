/*#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool check[100];
int dist[100];
int depth[100];
int parent[100];

class edge {
public:
	int to;
	int cost;
	edge(int to, int cost) : to(to), cost(cost){}
};

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
	int m;
	cin >> m;
	vector<edge> a[100];
	for (int i = 0; i < m-1; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		a[u].push_back(edge(v, w));
		a[v].push_back(edge(u, w));
	}

	parent[1] = 0;
	dist[1] = 0;
	depth[1] = 0;
	check[1] = true;

	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < a[x].size(); i++) {
			edge e = a[x][i];
			cout << e.to << endl;
			if (!check[e.to]) {
				dist[e.to] = dist[x] + e.cost;
				check[e.to] = true;
				depth[e.to] = depth[x] + 1;
				parent[e.to] = x;
				q.push(e.to);
			}	
		}
	}

	int n;
	cin >> n;
	while (n--) {
		int u, v;
		cin >> u >> v;
		cout << dist[u] + dist[v] - (2 * dist[lca(u, v)]) << endl;
		cout << lca(u, v) << endl;
	}

}*/