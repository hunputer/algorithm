/*#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;
int a[100][100] = {};
int d[100][100] = {};
int ans[100] = {};
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
void bfs(int x, int y, int cnt, int n, int m) {
	queue<pair<int, int>> q;
	q.push(make_pair(x, y)); d[x][y] = cnt;
	while (!q.empty()) {
		int x = q.front().first; int y = q.front().second; q.pop();
		for (int k = 0; k < 4; k++) {
			int xn = x + dx[k]; int yn = y + dy[k];
			if (xn >= 0 && xn < n && yn >=0 && yn < m) {
				if (a[xn][yn] == 1 && d[xn][yn] == 0) {
					d[xn][yn] = d[x][y] + 1;
					q.push(make_pair(xn, yn));
				}
			}
		}
	}

}

int main() {
	int n,m;
	cin >>n>> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
		cout << endl;
	}

	bfs(0, 0, 1, n, m);

	cout << d[n - 1][m - 1];
	

}*/