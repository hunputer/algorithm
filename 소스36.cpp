/*#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	int n, b;
	cin >> n >> b;

	string ans = "";
	while (n > 0) {
		int r = n % b;
		if (r < 10) {
			ans += (char)(r + '0');
		}
		else {
			ans += (char)(r + 'A' - 10);
		}
		n /= b;
	}

	reverse(ans.begin(), ans.end());
	cout << ans << endl;
}*/