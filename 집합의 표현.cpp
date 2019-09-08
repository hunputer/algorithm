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
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}

	while (m--) {
		int x, y, z;
		cin >> x >> y >> z;
		if (x == 0) {
			Union(y, z);
		}
		if (x == 1) {
			if (find(y) == find(z)) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}	
}*/