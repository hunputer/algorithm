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
			cout << "10�� 20������ 7�� ����� �Է��ϼ���: ";
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
				cout << "���� 7�� �����" << value << "�Դϴ�." << endl;
			}
		}
		catch (int a) {
			if (a == UNDERVALUEEXCEPTION) {
				cout << "10������ �̻� ���� ��������" << endl;
			}
			else if (a == OVERVALUEEXCEPTION) {
				cout << "20������ �̻� ���� ��������" << endl;
			}
			else if (a == NOTMULTIVALUEEXCEPTION) {
				cout << "7�� ����� ��������" << endl;
			}
		}
	} while (value != 14);
}*/