/*#include<iostream>
#include<string.h>
using namespace std;

class Chulsoo
{
private:
	char* name;
public:
	Chulsoo(const char* name) {
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		cout << "Chulsoo::Chulsoo(name) ������ �Ϸ�" << endl;
	}
	Chulsoo(const Chulsoo& source) {
		this->name = new char[strlen(source.name) + 1];
		strcpy_s(this->name, strlen(source.name) + 1, source.name);
	}
	~Chulsoo() {
		delete[] name;
		cout << "Culsoo::~Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}
	void introduce() {
		cout << "�̸� :" << name << endl;
	}
};

int main() {
	Chulsoo chulsoo("ö��");
	Chulsoo chulhee(chulsoo);
	chulhee.introduce();
	chulsoo.introduce();
}*/
