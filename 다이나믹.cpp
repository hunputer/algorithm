/*#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
int a[100];
int group[100];

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	int r = sqrt(m);
	for (int i = 0; i < m; i++) {
		if (i % r == 0) {
			group[i / r] = a[i];
		}
		else {
			group[i / r] = min(group[i / r], a[i]);
		}
	}

	int u, v;
	cin >> u >> v;
	if (group[u / r] == group[v / r]) {
		int ans = a[u];
		for (int i = u; i <= v; i++) {
			if (ans > a[i]) {
				ans = a[i];
			}
		}
		cout << ans << endl;
	}
	else {
		int ans = a[u];
		while (true) {
			ans = min(ans, a[u]);
			u += 1;
			if (u % r == 0) {
				break;
			}
		}
		while (true) {
			ans = min(ans, a[v]);
			v -= 1;
			if (v % r == r - 1) {
				break;
			}
		}
		for (int i = u / r; i <= v / r; i++) {
			ans = min(ans, group[i]);
		}
		cout << ans << endl;
	}


}

#include<iostream>
#include<algorithm>

using namespace std;

int a[100];
int d[100][100];

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i++) {
		d[i][0] = a[i];
	}

	for (int j = 1; (1 << j) < m; j++) {
		for (int i = 0; i < m; i++) {
			if (i + (1 << j) - 1 < m) {
				d[i][j] = min(d[i][j - 1], d[(1 << (j - 1)) + i][j - 1]);
			} 
		}
	}

	int start, end;
	cin >> start >> end;
	int ans = a[start];
	int k = 6;
	while (start <= end && k >= 0) {
		if (start + (1 << k) - 1 <= end) {
			ans = min(ans, d[start][k]);
			start += (1 << k);
		}
		k -= 1;
	}
	cout << ans << endl;
}*/


