/*#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int a[100000];

int main() {
	int n;
	cin >> n;
	int ans = 100000;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		ans = min(ans, a[i] * n);
	}
	int depth = 0;
	stack<pair<int,int>> s;
	for (int i = 0; i < n; i++) {
		s.push(make_pair(i,a[i]));
		depth = 1;
		while (!s.empty()) {
			auto p = s.top();
				if (a[i] <= a[p.first + 1]) {
					auto p = s.top();
					depth += 1;
					s.pop();
					s.push(make_pair(p.first + 1, a[p.first + 1]));
				}
			    else {
				int sum = a[i] * depth;
				ans = max(ans, sum);
				while (!s.empty()) {
					s.pop();
				}
			}
		}
	}

	cout << ans << endl;
}*/