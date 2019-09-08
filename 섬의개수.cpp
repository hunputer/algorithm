/*#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;
int a[100][100] = {};
int d[100][100] = {};
int ans[100] = {};
int dx[] = { 0,0,1,-1,1,1,-1,-1 };
int dy[] = { 1,-1,0,0,1,-1,1,-1 };
void bfs(int x, int y, int cnt, int m) {
	queue<pair<int, int>> q;
	q.push(make_pair(x, y)); d[x][y] = cnt;
	while (!q.empty()) {
		int x = q.front().first; int y = q.front().second; q.pop();
		for (int k = 0; k < 8; k++) {
			int xn = x + dx[k]; int yn = y + dy[k];
			if (xn >= 0 && xn < m && yn >=0 && yn < m) {
				if (a[xn][yn] == 1 && d[xn][yn] == 0) {
					d[xn][yn] = cnt;
					q.push(make_pair(xn, yn));
				}
			}
		}
	}

}

int main() {
	int cnt = 0;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1 && d[i][j] == 0)
			   bfs(i, j, ++cnt, m);
		}
	}

	cout << cnt << endl;

}*/