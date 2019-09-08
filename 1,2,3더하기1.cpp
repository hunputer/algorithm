/*#include<iostream>

using namespace std;

int go(int count, int sum, int goal) {
	if (count > 10) {
		return 0;
	}
	if (sum > goal) {
		return 0;
	}
	if (sum == goal) {
		return 1;
	}
	int now = 0;
	for (int i = 1; i <= 3; i++) {
		now += go(count + 1, sum + i, goal);
	}
	return now;
}

int main() {
	int n;
	cin >> n;
	cout << go(0, 0, n) << endl;
}*/