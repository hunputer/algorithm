/*#include<iostream>
#include<stack>

using namespace std;

int a[500000];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	stack<pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		s.push(make_pair(i, a[i]));
		while (!s.empty()) {
			auto p = s.top();
			if (i != 0) {
				ans += 1;
			}
			if (p.second <= a[i + 1]) {
				s.pop();
			}
			else {
				break;
			}
		}
	}

	cout << ans << endl;
}*/