/*#include<iostream>

using namespace std;
int postorder[1000];
int inorder[1000];
int position[1000];
int root = 0;
int len = 0;
void solve(int is, int ie, int ps, int pe) {
	if (is > ie || ps > pe) return;
	root = postorder[pe];
	cout << root;
	int p = position[root];
	len = p - is;
	solve(is, p - 1, ps, ps + len - 1);
	solve(p + 1, ie, ps, pe - 1);
}

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> inorder[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> postorder[i];
	}
	for (int i = 0; i < m; i++) {
		position[inorder[i]] = i;
	}
	solve(0, m-1, 0, m-1);
}*/