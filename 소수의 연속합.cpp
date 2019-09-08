/*#include<iostream>

using namespace std;

int a[100];
int check[101];
int prime[100];

int main() {
	int n;
	cin >> n;

	int k = 0;
	for (int i = 2; i <= n; i++) {
		if (check[i] == false){ 
			prime[k++] = i;
			for (int j = i * 2; j <= n; j += i) {
				check[j] = true;
			}
		}
	}

	int m = 0;
	for (int i = 0; i < 100; i++) {
		if (prime[i] != 0) {
			m += 1;
		}
	}

	int count = 0;
	int right = 0;
	int left = 0;
	int ans = prime[left];
	while (right < m) {
		if (n > ans) {
			right += 1;
			ans += prime[right];
		}
		else if (n == ans) {
			count += 1;
			right += 1;
			ans += prime[right];
		}
		else if (n < ans) {
			left += 1;
			right = left;
			ans = prime[left];
		}
	}

	cout << count << endl;
}*/