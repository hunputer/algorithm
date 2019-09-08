/*#include<Iostream>
#include<vector>
#include<queue>

using namespace std;
int dis[100][100] = {};
bool check[100][100];
int a[100][100];
int b[100][100];
queue<pair<int, int>> q;
int X[4] = { 0 , 0 , -1, 1 };
int Y[4] = { 1, -1, 0, 0 };

int main() {
	int k = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = k;
			k += 1;
		}
	}
		a[2][2] = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> b[i][j];
		}
	}
	int m = 0;
	int n = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (b[i][j] == 0) {
				m = i;
				n = j;
			}
		}
	}

	q.push(make_pair(m, n));
	while (!q.empty()) {
		int x = q.front().first; int y = q.front().second; q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + X[i]; int ny = y + Y[i];
			if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3) {
				if (check[nx][ny] == false && b[nx][ny] == a[x][y]) {
					check[nx][ny] = true;
					b[x][y] = b[nx][ny];
					b[nx][ny] = 0;
					dis[nx][ny] = dis[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}

	cout << dis[2][2] << endl;
}*/