/*#include<iostream>

using namespace std;

int main() {
	int d[100] = {};
	int a[100];
	int n;
	cin >> n;
	int i = 1;

    for(int i =2; i<=n; i++){
		d[0] = 0;
		d[1] = 1;
		for(int j = 1; j<=n; j++)
	     if(i>=(j*j))
		 d[i] = d[i - (j*j)] + 1;
	}

	cout << d[n];
}*/