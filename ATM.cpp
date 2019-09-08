/*#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n[1000] = {};
	int p[1000] = {};
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	sort(p, p + m);

	int ans = 0;
	for (int i = 0; i < m; i++) {
		ans += p[i];
		n[i] = ans;
	}

	ans = 0;
	for (int i = 0; i < m; i++) {
		ans += n[i];
	}

	cout << ans << endl;
}*/