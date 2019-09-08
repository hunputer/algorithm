/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int right_count = 1;
int left_count = 1;
int count1 = 0;
int total_count = 0;

int main() {
	int n, s;
	cin >> n >> s;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m = n / 2;
	n = n - m;
	vector<int> first(1 << n);
	for (int i = 0; i < (1 << n); i++) {
		for (int k = 0; k < n; k++) {
			if (i & (1 << k)) {
				first[i] += a[k];
			}
		}
	}
	vector<int> second(1 << m);
	for (int i = 0; i < (1 << m); i++) {
		for (int k = 0; k < m; k++) {
			if (i & (1 << k)) {
				second[i] += a[k+n];
			}
		}
	}

	sort(first.begin(), first.end());
	sort(second.begin(), second.end());


	int right = first.size()-1;
	int left = 0;
	int ans = first[right] + second[left];
	while (left < second.size() && right > 0) {
		if (s > ans) {
			left += 1;
			ans = first[right] + second[left];
		}
		else if (ans == s) {
			if (first[right] == 0 && second[left] == 0) {
				right -= 1;
				left += 1;
				ans = first[right] + second[left];
			}
			else {
				while (first[right] == first[right - 1] || second[left] == second[left + 1]) {
					if (first[right] == first[right - 1]) {
						right_count += 1;
						right -= 1;
					}
					if (second[left] == second[left + 1]) {
						left_count += 1;
						left += 1;
					}
				}
				right -= 1;
				left += 1;
				count1 = right_count * left_count;
				total_count += count1;
				right_count = 1;
				left_count = 1;
				count1 = 0;
				ans = first[right] + second[left];
			}
		}
		else if (s < ans) {
			right -= 1;
			ans = first[right] + second[left];
		}
	}

	cout << total_count << endl;
}*/