/*#include<iostream>
#include<string>

using namespace std;

int main() {
	string a = {};
	int n;

	cin >> a >> n;

	int ans = 0;

	for (int i = 0; i < a.size(); i++) {
		if ('0' <= a[i] && '9' >= a[i]) {
			ans = ans * n + (a[i] - '0');
		}
		else {
			ans = ans * n + (a[i] - 'A' + 10);
		}
	}

	cout << ans;
}*/
