/*#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int ans1 = 0, ans2 = 0, ans3=0, ans = 0;
	int ans4 = 0, ans5 = 0, ans6 = 0, ans7 = 0;

	for (int i = 5; i <= n; i *= 5) {
		ans1 = n / i;
	}
	for (int i = 5; i <= m; i *= 5) {
		ans2 = m / i;
	}
	for (int i = 5; i <= (n-m); i *= 5) {
		ans3 = (n-m) / i;
	}

	for (int i = 2; i <= n; i *= 2) {
		ans4 = n / i;
	}
	for (int i = 2; i <= m; i *= 2) {
		ans5 = m / i;
	}
	for (int i = 2; i <= (n - m); i *= 2) {
		ans6 = (n - m) / i;
	}

	ans = ans1 - ans2 + ans3;
	ans7 = ans4 - ans5 + ans6;

	cout << min(ans7,ans) << endl;
}*/