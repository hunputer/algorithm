/*#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
bool check[20][20];
char a[20][20] = {};
queue<pair<int, int>> q;
int X[4] = { 0,0,1,-1 };
int Y[4] = { 1,-1, 0, 0 };
vector<char> stall(8);
int len[20][20] = {};

bool stack(char b) {
	for (int i = 0; i < stall.size(); i++) {
		if (stall[i] == b) {
			return false;
		}
	}
	return true;
}

int main() {
	int r, c;
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
		}
	}
	q.push(make_pair(0, 0));
	stall.push_back(a[0][0]);
	check[0][0] = true;
	while (!q.empty()) {
		int x = q.front().first; int y = q.front().second; q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + X[i]; int ny = y + Y[i];
			if (nx >= 0 && nx < c && ny >= 0 && ny < r) {
				if (check[nx][ny] == false && stack(a[nx][ny]) == true) {
					stall.push_back(a[nx][ny]);
					len[nx][ny] = len[x][y] + 1;
					check[nx][ny] = true;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			ans = max(ans, len[i][j]);
		}
	}

	cout << ans+1 << endl;


}*/