/*#include<iostream>
#include<vector>

using namespace std;

class edge {
public:
	int start;
	int end;
	int cost;
};

int dist[100];

int main() {
	int inf = 10000000;
	int m, n, w;
	cin >> m >> n >> w;
	vector<edge> a(n*2 + w);
	for (int i = 0; i < n; i++) {
		cin >> a[i].start >> a[i].end >> a[i].cost;
		
	}
	for (int i = 0; i < n; i++) {
	      a[i + n].start = a[i].end;
		  a[i + n].end = a[i].start;
		  a[i + n].cost = a[i].cost;
	}
	for (int i = n*2; i < w + (n*2); i++) {
		cin >> a[i].start >> a[i].end >> a[i].cost;
		a[i].cost = -a[i].cost;
	}

	for (int i = 1; i <= m; i++) {
		dist[i] = inf;
	}

	dist[1] = 0;
	bool nagative = false;
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j < n + 2 + w; j++) {
			int x = a[j].start;
			int y = a[j].end;
			int z = a[j].cost;
			if (dist[x] != inf && dist[y] > dist[x] + z) {
				dist[y] = dist[x] + z;
				if (i == m) {
					nagative = true;
				}
			}
		}
	}
	
	cout << (nagative ? "YES" : "NO") << endl;

}*/