/*#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int ind[1000] = {};
int ind2[1000] = {};
vector<int> a[1000];
int node[100][100] = {};
int node2[100][100] = {};
int d[100] = {};
vector<int> b[1000];

int main() {
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		a[u].push_back(v);
		b[v].push_back(u);
		node[u][v] = w;
		node2[v][u] = w;
		ind[v] += 1;
		ind2[u] += 1;
	}

	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (ind[i] == 0) {
			q.push(i);
		}
	}

	for (int i = 1; i <= n; i++) {
		int x = q.front(); q.pop();
		for (int j = 0; j < a[x].size(); j++) {
			int y = a[x][j];
			if (d[y] < d[x] + node[x][y]) {
				d[y] = d[x] + node[x][y];
			}
			ind[y] -= 1;
			if (ind[y] == 0) {
				q.push(y);
			}
		}
	}

	cout << d[n] << endl;

	queue<int> q2;
	for (int i = 1; i <= n; i++) {
		if (ind2[i] == 0) {
			q2.push(i);
		}
	}

	int count = 0;
	while(!q2.empty()){
		int x = q2.front(); q2.pop();
		for (int j = 0; j < b[x].size(); j++) {
			int y = b[x][j];
			if (d[x] - d[y] == node2[x][y]) {
				count += 1;
				q2.push(y);
			}
		}
	}

	cout << count << endl;


}*/