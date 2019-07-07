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
	cout << "이름 : " << name << endl;
	cout << "성별 : " << sex << endl;
	cout << "직업 : " << job << endl;
	cout << "성격 : " << character << endl;
	cout << "나이 : " << age << endl;
	cout << "결혼여부 : " << (marriageStatus ? "yes" : "No") << endl;
}

void Chulsoo::eat(const char* food){
	cout << "철수는 " << food << "를 먹었다. " << endl;
}

void Chulsoo::sleep() {
	cout << "철수는 잠을 잔다" << endl;
}

void Chulsoo::drive(const char* destination) {
	cout << "철수는 " << destination << "으로 간다" <<endl;
}

void Chulsoo::write() {
	cout << "철수는 글을 적는다" << endl;
}

void Chulsoo ::read() {
	cout << "철수는 책을 읽는다" << endl;
}

void Younghee::introduce() {
	cout << "이름 : " << name << endl;
	cout << "성별 : " << sex << endl;
	cout << "직업 : " << job << endl;
	cout << "성격 : " << character << endl;
	cout << "나이 : " << age << endl;
	cout << "결혼여부 : " << (marriageStatus ? "yes" : "No") << endl;
}

void Younghee::eat(const char* food) {
	cout << "영희는 " << food << "를 먹었다. " << endl;
}

void Younghee::sleep() {
	cout << "영희는 잠을 잔다" << endl;
}

void Younghee::drive(const char* destination) {
	cout << "영희는 " << destination << "으로 간다" << endl;
}

void Younghee::write() {
	cout << "영희는 글을 적는다" << endl;
}

void Younghee::read() {
	cout << "영희는 책을 읽는다" << endl;
}



int main() {
	Chulsoo chulsoo;
	Younghee younghee;


	chulsoo.introduce();
	chulsoo.drive("수산시장");
	chulsoo.eat("회덮밥");
	chulsoo.drive("집");
	chulsoo.sleep();
	chulsoo.read();
	chulsoo.drive("청와대");
	chulsoo.eat("욕");
}*/
