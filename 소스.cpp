/*#include<iostream>
#include<string.h>
using namespace std;

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHARACTER_LEN 20

class Chulsoo {
private:
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	bool marriageStatus;

public:
	void introduce();
	void eat(const char* food);
	void sleep();
	void drive(const char* destination);
	void write();
	void read();
};

class Younghee {
private:
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	bool marriageStatus;

public:
	void introduce();
	void eat(const char* food);
	void sleep();
	void drive(const char* destination);
	void write();
	void read();
};

void Chulsoo::introduce() {
	cout << "�̸� : " << name << endl;
	cout << "���� : " << sex << endl;
	cout << "���� : " << job << endl;
	cout << "���� : " << character << endl;
	cout << "���� : " << age << endl;
	cout << "��ȥ���� : " << (marriageStatus ? "yes" : "No") << endl;
}

void Chulsoo::eat(const char* food){
	cout << "ö���� " << food << "�� �Ծ���. " << endl;
}

void Chulsoo::sleep() {
	cout << "ö���� ���� �ܴ�" << endl;
}

void Chulsoo::drive(const char* destination) {
	cout << "ö���� " << destination << "���� ����" <<endl;
}

void Chulsoo::write() {
	cout << "ö���� ���� ���´�" << endl;
}

void Chulsoo ::read() {
	cout << "ö���� å�� �д´�" << endl;
}

void Younghee::introduce() {
	cout << "�̸� : " << name << endl;
	cout << "���� : " << sex << endl;
	cout << "���� : " << job << endl;
	cout << "���� : " << character << endl;
	cout << "���� : " << age << endl;
	cout << "��ȥ���� : " << (marriageStatus ? "yes" : "No") << endl;
}

void Younghee::eat(const char* food) {
	cout << "����� " << food << "�� �Ծ���. " << endl;
}

void Younghee::sleep() {
	cout << "����� ���� �ܴ�" << endl;
}

void Younghee::drive(const char* destination) {
	cout << "����� " << destination << "���� ����" << endl;
}

void Younghee::write() {
	cout << "����� ���� ���´�" << endl;
}

void Younghee::read() {
	cout << "����� å�� �д´�" << endl;
}



int main() {
	Chulsoo chulsoo;
	Younghee younghee;


	chulsoo.introduce();
	chulsoo.drive("�������");
	chulsoo.eat("ȸ����");
	chulsoo.drive("��");
	chulsoo.sleep();
	chulsoo.read();
	chulsoo.drive("û�ʹ�");
	chulsoo.eat("��");
}*/
