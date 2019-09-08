/*#include<iostream>
#include<vector>

using namespace std;

class edge {
public:
	int start;
	int end;
	int cost;
};

int dist[1000];

int main() {
	int n, m;
	cin >> n >> m;
	vector<edge> a(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i].start >> a[i].end >> a[i].cost;
	}
	int inf = 100000000;
	for (int i = 1; i <= n; i++) {
		dist[i] = inf;
	}

	dist[1] = 0;
	bool negative = false;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			int x = a[j].start;
			int y = a[j].end;
			int z = a[j].cost;
			if (dist[i] != inf && dist[y] > dist[x] + z) {
				dist[y] = dist[x] + z;
				if (i == n) {
					negative = true;
				}
			}
		}
	}

	if (negative) {
		cout << -1 << endl;
	}
	else {
		for (int i = 2; i <= n; i++) {
			if (dist[i] == inf) dist[i] = -1;
			cout << dist[i] << endl;
		}
	}

}*/