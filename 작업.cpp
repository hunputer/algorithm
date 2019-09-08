/*#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int ind[1000] = {};
vector<int> a[1000];
int node[1000] = {};
int d[1000] = {};

int main() {
	int m;
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> node[i];
		int u;
		cin >> u;
		for (int j = 1; j <= u; j++) {
			int v;
			cin >> v;
			a[v].push_back(i);
			ind[i] += 1;
		}
	}

	queue<int> q;
	for (int i = 1; i <= m; i++) {
		if (ind[i] == 0) {
			q.push(i);
			d[i] = node[i];
		}
	}

	for (int i = 1; i <= m; i++) {
		int x = q.front(); q.pop();
		for (int j = 0; j < a[x].size(); j++) {
			int y = a[x][j];
			ind[y] -= 1;
			if (d[y] < d[x] + node[y]) {
				d[y] = d[x] + node[y];
			}
			if (ind[y] == 0) {
				q.push(y);
			}
		}
	}

	cout << d[m] << endl;

}*/