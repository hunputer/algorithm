
/*#include<iostream>
#include<set>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> s1(n);
	vector<string> s2(m);
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		s1.push_back(a);
	}
	for (int i = 0; i < m; i++) {
		string a;
		cin >> a;
		s2.push_back(a);
	}
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	vector<string> s3;
	set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(s3));
	
	for (int i = 0; i < s3.size(); i++) {
		cout << s3[i] << endl;
	}
}*/