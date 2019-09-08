/*#include<iostream>
#include<queue>

using namespace std;
bool check[1000] = {};
int dis[1000] = {};

int main() {
	queue<int> q;
	int m, n;
	cin >> m >> n;
 
	 q.push(m);
		while (!q.empty()) {
			int now = q.front(); q.pop();
			if (check[now * 2] == false && (now * 2) <= 1000) {
				int next = now * 2; q.push(next);
				dis[next] = dis[now] + 1;
				check[next] = true;
			}
			if (check[now + 1] == false && (now + 1) <= 1000) {
				int next = now + 1; q.push(next);
				dis[next] = dis[now] + 1;
				check[next] = true;
			}
			if (check[now - 1] == false && (now - 1) > 0) {
				int next = now - 1; q.push(next);
				dis[next] = dis[now] + 1;
				check[next] = true;
			}
		}

	cout << dis[n] << endl;
}*/