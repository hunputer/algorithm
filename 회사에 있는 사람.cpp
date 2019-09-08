/*#include<iostream>
#include<set>

using namespace std;

int main() {
	set<string> s;
	int n; 
	cin >> n;
	while (n--) {
		string a, b;
		cin >> a >> b;
		if (b == "enter") {
			s.insert(a);
		}
		else {
			s.erase(a);
		}
	}
	set<string>::iterator iter;
	for (auto iter = s.rbegin(); iter != s.rend(); iter++) {
		cout << *iter << endl;
	}
}*/