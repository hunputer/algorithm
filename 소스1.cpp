#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct OwnerInfo {
	char name[20];
	char phonenumber[13];
	char email[30];
	char address[50];
	char twitterAccount[20];
};


struct ContactInfo {
	char name[20];
	char phonenumber[13];
	char email[30];
	char address[50];
};

OwnerInfo owner;
ContactInfo contacts[100];
int contactNumber = 0;

void inputOwnerInfo()
{
	cout << "������ �̸�: ";
	cin >> owner.name;
	cout << "������ ��ȭ��ȣ: ";
	cin >> owner.phonenumber;
	cout << "������ �̸���: ";
	cin >> owner.email;
	cout << "������ �ּ�";
	cin >> owner.address;
	cout << "������ Ʈ���� ����: ";
	cin >> owner.twitterAccount;

	cout << "�Է��� �Ϸ�Ǿ����ϴ�. " << endl;
};

void ouputOwnerInfo()
{
	cout << "������ �̸� : " << owner.name << endl;
	cout << "������ ��ȭ��ȣ : " << owner.phonenumber << endl;
	cout << "������ �̸��� : " << owner.email << endl;
	cout << "������ �ּ� : " << owner.address << endl;
	cout << "������ Ʈ���� ���� : " << owner.twitterAccount << endl;
};

void addContact()
{
	cout << "����ó �̸�: ";
	cin >> contacts[contactNumber].name;
	cout << "����ó ��ȭ��ȣ: ";
	cin >> contacts[contactNumber].phonenumber;
	cout << "������ �̸���: ";
	cin >> contacts[contactNumber].email;
	cout << "������ �ּ�";
	cin >> contacts[contactNumber].address;

	contactNumber++;
	cout << "�Է��� �Ϸ�Ǿ����ϴ�. " << endl;
};

void ouputContactList()
{
	int i;
	for (i = 0; i < contactNumber; i++)
	{
		cout << i << " : " << contacts[contactNumber].name << endl;
	}
};


void runOwnerMenu()
{
	int menuNum;
	do {
		cout << "1. ������ ���� �Է�" << endl;
		cout << "2. ������ ���� ��ȸ" << endl;
		cout << "3. ���� ȭ��" << endl;
		cin >> menuNum;
		switch (menuNum) {
		case 1:
			inputOwnerInfo();
			break;
		case 2:
			ouputOwnerInfo();
			break;
		case 3:
			cout << "���� ȭ������ ���� ���ϴ�. " << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
		}
	} while (menuNum != 3);
}

void runContactMenu(){
	int menuNum;
	do {
		cout << "1. ����ó �߰� �Է� " << endl;
		cout << "2. ����ó ��� ��ȸ" << endl;
		cout << "3. ���� ȭ��" << endl;
		cin >> menuNum;
		switch (menuNum) {
		case 1:
			addContact();
			break;
		case 2:
			ouputContactList();
			break;
		case 3:
			cout << "���� ȭ������ ���� ���ϴ�. " << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
		}
	} while (menuNum != 3);
}

void runMainMenu()
{
	int menuNum;

	do {
		cout << "1. ������ ���� ���" << endl;
		cout << "2. ����ó ���� ���" << endl;
		cout << "3. ���α׷� ����" << endl;
		cin >> menuNum;
		switch (menuNum) {
		case 1:
			runOwnerMenu();
			break;
		case 2:
			runContactMenu();
			break;
		case 3:
			cout << "���α׷��� �����մϴ�. " << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
		}
	} while (menuNum != 3);
}

int main() {
	runMainMenu();
	return 0;
}