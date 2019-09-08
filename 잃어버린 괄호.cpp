/*#include<iostream>

using namespace std;

int main() {
	int p[50] = {};
	int a[50] = {};
	char b[50] = {};
	int i = 0;
	while (true) {
		cin >> a[i];
		cin >> b[i];
		if (b[i] == '/') {
			break;
		}
		i++;
	}

	p[0] = a[0];
	int k = 1;
	for (int i = 0; i < 50; i++) {
		if (b[i] == '+') {
			p[k] = a[i] + a[i + 1];
			k++;
		}
	}

   int ans = a[0];
   for (int i = 1; i < 50; i++) {
	   ans = ans - p[i];
   }

   cout << ans << endl;


}*/