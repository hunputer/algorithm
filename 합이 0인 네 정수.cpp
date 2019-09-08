/*#include<Iostream>
#include<vector>
#include<algorithm>

using namespace std;

int a[100];
int b[100];
int c[100];
int d[100];

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}
	vector<int> k;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			int sum = a[i] + b[j];
			k.push_back(sum);
		}
	}

	sort(k.begin(), k.end());

	int count = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			int sum = -(c[i] + d[j]);
			cout << sum << endl;
			int left = 0;
			int right = k.size() - 1;
			while (left <= right) {
				int mid = (left + right) / 2;
				if (k[mid] > sum) {
					right = mid - 1;
				}
				else if (k[mid] == sum) {
					count += 1;
					break;
				}
				else {
					left = mid + 1;
				}
			}
		}
	}

	cout << count << endl;


}*/