/*#include<iostream>
#include<vector>

using namespace std;

class edge {
public:
	int to;
	int cost;
	edge(int to, int cost) : to(to), cost(cost) {}
};

bool check[100];
int dist[100];
vector<edge> v[1000];

int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back(edge(b, c));
	}
	int start, end;
	cin >> start >> end;
	int inf = 10000000;
	for (int i = 1; i <= m; i++) {
		dist[i] = inf;
	}
	dist[start] = 0;
	for (int k = 0; k < m - 1; k++) {
		int m = inf + 1;
		int x = -1;
		for (int i = 1; i <= m; i++) {
			if (check[i] == false && m > dist[i]) {
				m = dist[i];
				x = i;
			}
		}
		check[x] = true;
		for (int i = 0; i < v[x].size(); i++) {
			int y = v[x][i].to;
			if (dist[y] > dist[x] + v[x][i].cost) {
				dist[y] = dist[x] + v[x][i].cost;
			}
		}
	}

	cout << dist[end] << endl;
}*/