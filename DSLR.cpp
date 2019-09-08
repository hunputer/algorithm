/*#include<iostream>
#include<string>
#include<queue>

using namespace std;
queue<int> q;
int check[10000];
string ans[10000];

int L(int now) {
	int a = now / 1000;
	now = now - (a * 1000);
	now = now * 10;
	int b = now + a;
	return b;
}

int R(int now) {
	int a = now % 10;
	now = now - (a * 1000);
	now = now / 10;
	int b = now + (a*1000);
	return b;
}

int main() {
	int m, n;
	cin >> m >> n;

	q.push(m);
	while (!q.empty()) {
		int now = q.front(); q.pop();
		if (now * 2 <= 10000) {
			if (check[now * 2] == false) {
				int next = now * 2; q.push(next);
				ans[next] = ans[now] + 'D';
				check[next] = true;
			}
		}
		if (now - 1 >= 0) {
			if (check[now - 1] == false) {
				int next = now - 1; q.push(next);
				ans[next] = ans[now] + 'S';
				check[next] = true;
			}
		}
		if (L(now) <= 10000) {
			if (check[L(now)] == false && now >= 1000) {
				int next = L(now); q.push(next);
				ans[next] = ans[now] + 'L';
				check[next] = true;
			}
		}
		if (R(now) <= 10000) {
			if (check[R(now)] == false && now >= 1000) {
				int next = R(now); q.push(next);
				ans[next] = ans[now] + 'R';
				check[next] = true;
			}
		}

	}

	cout << ans[n] << endl;
	
}*/