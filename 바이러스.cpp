/*#include<iostream>

using namespace std;

int parent[100];

int find(int x) {
	if (x == parent[x]) {
		return x;
	}
	else {
		return find(parent[x]);
	}
}

void Union(int x, int y) {
	x = find(x);
	y = find(y);
	parent[y] = x;
}

int main() {
	int m, n;
	cin >> m >> n;
	int ans = 0;
	for (int i = 1; i <= m; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		Union(a, b);
	}

	for (int i = 0; i < n; i++) {
		if (find(i) == 1) {
			ans += 1;
		}
	}

	cout << ans << endl;


}*/