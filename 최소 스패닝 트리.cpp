/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class edge {
public:
	int start, end, cost;
};

int p[10001];

int find(int x) {
	if (x == p[x]) {
		return x;
	}
	else {
		return p[x] = find(p[x]);
	}
}

void Union(int x, int y) {
	x = find(x);
	y = find(y);
	p[x] = y;
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		p[i] = i;
	}

	vector<edge> a(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i].start >> a[i].end >> a[i].cost;
	}

	sort(a.begin(), a.end(), [](edge& a, edge& b) {
		return a.cost < b.cost;
		});

	int ans = 0;
	for (int i = 0; i < m; i++) {
		edge e = a[i];
		int x = find(e.start);
		int y = find(e.end);
		if (x != y) {
			Union(e.start, e.end);
			ans += e.cost;
		}
	}

	cout << ans << endl;
}*/