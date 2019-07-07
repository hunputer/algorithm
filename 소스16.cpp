/*#include<iostream>

using namespace std;

#define UNDERVALUEEXCEPTION -1
#define OVERVALUEEXCEPTION -2
#define NOTMULTIVALUEEXCEPTION -3

int main()
{
	
	int value = 0;
	do {
		try
		{
			cout << "10과 20사이의 7의 배수를 입력하세요: ";
			cin >> value;

			if (value < 10) {
				throw UNDERVALUEEXCEPTION;
			}
			else if (value > 20) {
				throw OVERVALUEEXCEPTION;
			}
			else if (value % 7 != 0) {
				throw NOTMULTIVALUEEXCEPTION;
			}
			else {
				cout << "정답 7의 배수는" << value << "입니다." << endl;
			}
		}
		catch (int a) {
			if (a == UNDERVALUEEXCEPTION) {
				cout << "10값보다 이상 수를 넣으세요" << endl;
			}
			else if (a == OVERVALUEEXCEPTION) {
				cout << "20값보다 이상 수를 넣으세요" << endl;
			}
			else if (a == NOTMULTIVALUEEXCEPTION) {
				cout << "7의 배수를 넣으세요" << endl;
			}
		}
	} while (value != 14);
}*/