/*#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string a = "";
	string ans2 = "";
	int b, c;

	cin >> a >> c >> b;

	int ans1 = 0;

	for (int i = 0; i < a.size(); i++) {
		if ('0' <= a[i] && '9' >= a[i]) {
			ans1 = ans1 * c + (a[i] - '0');
		}
		else {
			ans1 = ans1 * c + (a[i] - 'A' + 10);
		}
	}

	while (ans1 > 0) {
		int r = ans1 % b;
		if (r < 10) { 
			ans2 += (char)(r + '0');
		}
		else {
			ans2 += (char)(r + 'A' - 10);
		}
		ans1 /= b;
	}

	reverse(ans2.begin(), ans2.end());

	cout << ans2 << endl;
}*/