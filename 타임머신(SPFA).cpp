/*#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class edge {
public:
	int to;
	int cost;
	edge(int to, int cost) : to(to),cost(cost){}
};

int dist[100];
bool c[100];
vector<edge> a[10001];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		a[x].push_back(edge(y, z));
	}
	int inf = 1000000;
	for (int i = 1; i <= n; i++) {
		dist[i] = inf;
	}

	dist[1] = 0;
	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int from = q.front();
		c[from] = false; q.pop();
		for (edge& e : a[from]) {
			cout << e.to << endl;
			int to = e.to; int cost = e.cost;
			if (dist[to] > dist[from] + cost) {
				dist[to] = dist[from] + cost;
				if (c[to] == false) {
					q.push(to);
					c[to] = true;
				}
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		if (dist[i] == inf) dist[i] = -1;
		cout << dist[i] << endl;
	}


	
}*/