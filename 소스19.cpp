/*#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	stack<char> right;
	stack<char> left;
	char a[50] = {};
	cin >> a;
	int n = strlen(a);
	int count = 0;
	char select, insert;
	cin >> count;

	for (int i = n-1 ; i >= 0; i--) {
	    right.push(a[i]);
	}


	while (count > 0) {
		cin >> select;
		if (select == 'L') {
			right.push(left.top());
			left.pop();
		}
		else if (select == 'D') {
			left.push(right.top());
			right.pop();
		}
		else if (select == 'B') {
			left.pop();
		}
		else if (select == 'P') {
			cin >> insert;
			left.push(insert);
		}
		count--;
	}

	while (!left.empty()) {
		cout << left.top();
		left.pop();
	}
	
	while(!right.empty()) {
		cout << right.top();
		right.pop();
	}

}*/