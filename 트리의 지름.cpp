/*#include<iostream>
#include<queue>

using namespace std;

int len[100][100] = {};
int check[1000] = {};
int leng[1000] = {};
vector<int> a[1000];

void bfs(int start) {
	memset(leng, 0, sizeof(leng));
	memset(check, 0, sizeof(check));
	queue<int> q;
	check[start] = 1; leng[start] = 0; q.push(start);
	while (!q.empty()) {
		int x = q.front(); q.pop();
		for (int k = 0; k < a[x].size(); k++) {
			int y = a[x][k];
			if (check[y] == 0) {
				check[y] = 1;
				leng[y] = leng[x] + len[x][y];
				q.push(y);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		a[u].push_back(v); a[v].push_back(u);
		len[u][v] = w; len[v][u] = w;
	}
	bfs(1);
	int start = 1;
	for (int i = 2; i <= n; i++) {
		if (leng[i] > leng[start]) {
			start = i;
		}
	}

	bfs(start);

	int ans = leng[1];
	for (int i = 2; i <= n; i++) {
		if (ans < leng[i]) {
			ans = leng[i];
		}
	}
	cout << ans << endl;
}*/