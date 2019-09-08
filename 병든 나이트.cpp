/*#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int height = m;
	int ans = 0;
	if (height == 1) {
		ans = 1;
	}
	else if (height == 2) {
		ans = n / 2;
	}
	else if (height >= 3) {
		if (n >= 6) {
			ans = n - 6;
			ans = ans + 4;
		}
		else if(n == 5) {
			ans = 4;
		}
		else {
			ans = n;
		}
	}

	cout << ans << endl;

	
}*/