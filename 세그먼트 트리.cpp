/*#include<iostream>
#include<algorithm>

using namespace std;

int a[100];
int tree[100];

void init(int node, int start, int end) {
	if (start == end) {
		tree[node] = a[start];
	}
	else {
		init(node * 2, start, (start + end) / 2);
		init(node * 2 + 1, (start + end) / 2  + 1, end);
		tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
	}
}

int query(int node, int start, int end, int i, int j) {
	if (end < i || start > j) {
		return -1;
	}
	if (start >= i && end <= j) {
		return tree[node];
	}
	int m1 = query(node * 2, start, (start + end) / 2, i, j);
	int m2 = query(node * 2, (start + end) / 2 +1, end, i, j);
	if (m1 == -1) {
		return m2;
	}
	else if (m2 == -1) {
		return m1;
	}
	else {
		return min(m1, m2);
	}
}

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	init(1, 0, m - 1);
	cout << query(1, 0, m - 1, 0, 2);
}*/