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
	Chulsoo(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) {
		cout << "Chulsoo::Chulsoo(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) ������ ����" << endl;
		strcpy_s(this->name, name);
		strcpy_s(this->sex, sex);
		strcpy_s(this->job, job);
		strcpy_s(this->character, character);
		this->age = age;
		this->marriageStatus = marriageStatus;
		cout << "Chulsoo::Chulsoo(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) ������ ����" << endl;
	}
	Chulsoo() {
		cout << "chulsoo() ������ ����" << endl;
	};

	void intrduce() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << sex << endl;
		cout << "���� : " << job << endl;
		cout << "���� : " << character << endl;
		cout << "���� : " << age << endl;
		cout << "��ȥ���� : " << (marriageStatus?"YES" : "NO") << endl;
	}

	void eat(const char* food) {
		cout << "ö���� " << food << "�� �Ծ���. " << endl;
	}

	void sleep() {
		cout << "ö���� ���� �ܴ�. " << endl;
	}

	void write() {
		cout << "ö���� å�� ����. " << endl;
	}

	void read() {
		cout << "ö���� å�� �д´�. " << endl;
	}
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
	Younghee(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) {
		cout << "Younghee::Younghee(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) ������ ����" << endl;
		strcpy_s(this->name, name);
		strcpy_s(this->sex, sex);
		strcpy_s(this->job, job);
		strcpy_s(this->character, character);
		this->age = age;
		this->marriageStatus = marriageStatus;
		cout << "Younghee::Younghee(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) ������ ����" << endl;
	}
	Younghee(){
		cout << "younghee::younghee() ������ �Ϸ�" << endl;
	};

	void intrduce() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << sex << endl;
		cout << "���� : " << job << endl;
		cout << "���� : " << character << endl;
		cout << "���� : " << age << endl;
		cout << "��ȥ���� : " << (marriageStatus ? "YES" : "NO") << endl;
	}

	void eat(const char* food) {
		cout << "���� " << food << "�� �Ծ���. " << endl;;
	}

	void sleep(const char* sleep) {
		cout << "���� ���� �ܴ�. " << endl;
	}

	void write() {
		cout << "ö���� å�� ����.  " << endl;
	}

	void read() {
		cout << "ö���� å�� �д´�. " << endl;
	}
};

class DailyLife
{
private:
	Chulsoo chulsoo;
	Younghee younghee;
public:
	DailyLife(Chulsoo chulsooObject, Younghee youngheeObject) {
		cout << "DailyLife::DailyLife(chulsoo chulsooObject, Younghee youngheeObject) ������ ����" << endl;
			chulsoo = chulsooObject;
			younghee = youngheeObject;
	    cout << "DailyLife::DailyLife(chulsoo chulsooObject, Younghee youngheeObject) ������ ����" << endl;
	}

	void run() {
		chulsoo.eat("������ũ");
		younghee.eat("������ũ");
		chulsoo.write();
		chulsoo.sleep();
		cout << endl;
		chulsoo.intrduce();
		younghee.intrduce();
	}
};

int main() {
	Chulsoo chulsoo("ö��", "����", "�۰�", "diligent", 32, true);
	Younghee younghee("����", "����", "�ֺ�", "impatient", 32, true);
	DailyLife dailyLife(chulsoo, younghee);

	dailyLife.run();


}*/