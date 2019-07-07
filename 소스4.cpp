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
		cout << "Chulsoo::Chulsoo(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) 생성자 시작" << endl;
		strcpy_s(this->name, name);
		strcpy_s(this->sex, sex);
		strcpy_s(this->job, job);
		strcpy_s(this->character, character);
		this->age = age;
		this->marriageStatus = marriageStatus;
		cout << "Chulsoo::Chulsoo(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) 생성자 시작" << endl;
	}
	Chulsoo() {
		cout << "chulsoo() 생성자 시작" << endl;
	};

	void intrduce() {
		cout << "이름 : " << name << endl;
		cout << "성별 : " << sex << endl;
		cout << "직업 : " << job << endl;
		cout << "성격 : " << character << endl;
		cout << "나이 : " << age << endl;
		cout << "결혼여부 : " << (marriageStatus?"YES" : "NO") << endl;
	}

	void eat(const char* food) {
		cout << "철수가 " << food << "를 먹었다. " << endl;
	}

	void sleep() {
		cout << "철수가 잠을 잔다. " << endl;
	}

	void write() {
		cout << "철수가 책을 쓴다. " << endl;
	}

	void read() {
		cout << "철수가 책을 읽는다. " << endl;
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
		cout << "Younghee::Younghee(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) 생성자 시작" << endl;
		strcpy_s(this->name, name);
		strcpy_s(this->sex, sex);
		strcpy_s(this->job, job);
		strcpy_s(this->character, character);
		this->age = age;
		this->marriageStatus = marriageStatus;
		cout << "Younghee::Younghee(const char* name, const char* sex, const char* job, const char* character, int age, bool marriageStatus) 생성자 시작" << endl;
	}
	Younghee(){
		cout << "younghee::younghee() 생성자 완료" << endl;
	};

	void intrduce() {
		cout << "이름 : " << name << endl;
		cout << "성별 : " << sex << endl;
		cout << "직업 : " << job << endl;
		cout << "성격 : " << character << endl;
		cout << "나이 : " << age << endl;
		cout << "결혼여부 : " << (marriageStatus ? "YES" : "NO") << endl;
	}

	void eat(const char* food) {
		cout << "영희가 " << food << "를 먹었다. " << endl;;
	}

	void sleep(const char* sleep) {
		cout << "영희가 잠을 잔다. " << endl;
	}

	void write() {
		cout << "철수가 책을 쓴다.  " << endl;
	}

	void read() {
		cout << "철수가 책을 읽는다. " << endl;
	}
};

class DailyLife
{
private:
	Chulsoo chulsoo;
	Younghee younghee;
public:
	DailyLife(Chulsoo chulsooObject, Younghee youngheeObject) {
		cout << "DailyLife::DailyLife(chulsoo chulsooObject, Younghee youngheeObject) 생성자 시작" << endl;
			chulsoo = chulsooObject;
			younghee = youngheeObject;
	    cout << "DailyLife::DailyLife(chulsoo chulsooObject, Younghee youngheeObject) 생성자 시작" << endl;
	}

	void run() {
		chulsoo.eat("스테이크");
		younghee.eat("스테이크");
		chulsoo.write();
		chulsoo.sleep();
		cout << endl;
		chulsoo.intrduce();
		younghee.intrduce();
	}
};

int main() {
	Chulsoo chulsoo("철수", "남성", "작가", "diligent", 32, true);
	Younghee younghee("영희", "여성", "주부", "impatient", 32, true);
	DailyLife dailyLife(chulsoo, younghee);

	dailyLife.run();


}*/