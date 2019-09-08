/*#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int ind[100];
vector<int> a[1000];

int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		a[u].push_back(k);
		ind[k] += 1;
	}

	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 1; i <= m; i++) {
		if (ind[i] == 0) {
			q.push(i);
		}
	}

	for (int i = 1; i <= m; i++) {
		int x = q.top();
		cout << x << " " << endl;
		q.pop();
		for (int j = 0; j < a[x].size(); j++) {
			int y = a[x][j];
			ind[y] -= 1;
			if (ind[y] == 0) {
				q.push(y);
			}
		}
	}
}*/