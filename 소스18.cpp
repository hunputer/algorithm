/*#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	char b[100] = {};
	stack<int> v;
	int ent = 0;
	cin >> b;

	for (int i = 0; i < 99; i++) {
		if (b[i] == '(') {
			v.push(i);
		}
		else if(b[i] == ')'){
			if (i == (v.top() + 1)) {
				v.pop();
				ent = ent + v.size();
			}
			else {
				v.pop();
				ent = ent + 1;
			}
		}
	}

	cout << ent << endl;
}*/