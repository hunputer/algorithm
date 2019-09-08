/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class meeting {
public:
	int first;
	int second;
};

int main() {
	int n;
	cin >> n;
	vector<meeting> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;5
	}

	sort(p.begin(), p.end(), [](const meeting& a,const meeting& b) {
		if (a.second == b.second) { return a.first < b.first; }
		else { return a.second < b.second; } });

	int now = 0;
	int ans = 0;
	for (int i = 0; i < p.size(); i++) {
		if (now <= p[i].first) {
			now = p[i].second;
			ans += 1;
		}
	}
	cout << ans << endl;
}*/