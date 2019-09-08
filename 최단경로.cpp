/*#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class edge {
public:
	int to;
	int cost;
	edge(int to, int cost) : to(to), cost(cost) {}
};

bool check[100];
int dist[100];
vector<edge> a[10000];

int main() {
	int m, n;
	cin >> m >> n;
	int start;
	cin >> start;
	for (int i = 0; i < n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		a[x].push_back(edge(y, z));
	}
	int inf = 10000000;
	for (int i = 1; i <= m; i++) {
		dist[i] = inf;
	}
	dist[start] = 0;
	priority_queue<pair<int, int>> q;
	q.push(make_pair(0, start));
	while (!q.empty()) {
		auto p = q.top();
		q.pop();
		int x = p.second;
		if (check[x]) {
			continue;
		}
		check[x] = true;
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i].to;
			if (dist[y] > dist[x] + a[x][i].cost) {
				dist[y] = dist[x] + a[x][i].cost;
				q.push(make_pair(-dist[y], y));
			}
		}
	}

	for (int i = 1; i <= m; i++) {
		cout << dist[i] << endl;
	}
}*/
