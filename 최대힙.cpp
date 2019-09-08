/*#include<iostream>
#include<queue>

using namespace std;

int main() {
	int n;
	priority_queue<int, vector<int>, greater<int>> q;

	cin >> n;

	while (n--) {
		int x;
		cin >> x;

		if (x == 0) {
			cout << (q.empty() ? 0 : q.top()) << endl;
			if (!q.empty()) {
				q.pop();
			}
		}
		else {
			q.push(x);
		}
	}
}*/