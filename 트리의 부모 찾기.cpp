/*#include<iostream>
#include<queue>

using namespace std;
int check[1000] = {};
int depth[1000] = {};
int parent[1000] = {};
vector<int> a[100];
void bfs(int s) {
	queue<int> q;
	check[1] = 1; depth[1] = 0; parent[1] = 0;  q.push(1);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int y : a[x]) {
			if (check[y] == 0) {
				depth[y] = depth[x] + 1;
				check[y] = true;
				parent[y] = x;
				q.push(y);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v); a[v].push_back(u);
	}

	bfs(a[1][0]);

	for (int i = 2; i <= n; i++) {
		cout << parent[i] << endl;
	}


}*/
