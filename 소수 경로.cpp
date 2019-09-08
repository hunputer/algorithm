/*#include<iostream>
#include<queue>
#include<string>

using namespace std;
bool check[10001];
int prime[10000];
int dis[10000] = {};
queue<int> q;

int change(int num, int index, int digit) {
	if (index == 0 && digit == 0) return -1;
	string s = to_string(num);
	s[index] = digit + '0';
		return stoi(s);
}


int main() {
	for (int i = 2; i <= 10000; i++) {
		if (check[i] == false) {
			for (int j = i + i; j < 10000; j += i) {
				check[j] = true;
			}
		}
	}

	int m, n;
	cin >> m >> n;
	q.push(m);
	while (!q.empty()) {
		int now = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j <= 9; j++) {
					if (check[change(now, i, j)] == false && change(now,i,j) != (-1)){
						int next = change(now, i, j);
							check[next] = true;
							cout << dis[now] << endl;
							dis[next] = dis[now] + 1;
							cout << next << endl;
							q.push(next);
						}
					}
			}
		}

	cout << dis[n]-1 << endl;
}*/

