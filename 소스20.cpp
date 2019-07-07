/*#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main() {
	int a, b = 0;
	cin >> a >> b;
	queue<int> q;
	for (auto i = 1; i <= a; i++) {
		q.push(i);
	}

	while (1) {
		if (q.size() >= 3) {
			for (auto i = 0; i < b-1; i++) {
				q.push(q.front());
				q.pop();
			}
			cout << q.front() << " ";
			q.pop();
		}
		else if (q.size() < 3) {
			while(!q.empty()){
				cout << q.front() << " ";
				q.pop();
			}
			break;
		}

	}
}*/