#include <iostream>
using namespace std;

/*class Student{ // 변수 뿐만 아니라 함수도 넣을 수 있음.
private:
	int nHakbun;
	const char * sName;
public:
	Student(); //생성자 선언
	// 생성자는 객체 생성과 동시에 초기화를 같이 하기 때문에 정보 은닉과 안정성을 제공.
	void show(); // 함수 선언
};
Student::Student() { // 생성자 정의
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다" << endl;
}
void Student::show() {// 함수 정의
	cout << "학버는 :" << nHakbun << "입니다." << endl;
	cout << "이름은 : " << sName << "입니다." << endl;
}
int main() {
	Student student1;
	student1.show();
	return 0;
}*/
//114

/*
class Student {
private:
	int nHakbun;
	const char *sName;
public:
	Student();
	Student(int, const char*);
	void show();
};
Student::Student() {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다" << endl;
}

Student::Student(int nHakbun, const char* sName) {
	this->nHakbun = nHakbun;
	this->sName = sName;
}
void Student::show() {
	cout << "학번은 " << nHakbun << endl;
	cout << "이름은 " << sName << "입니다. " << endl;
}
int main() {
	Student student1;
	Student student2(2398, "마리아");
	student1.show();
	student2.show();
}
*/
//115ㅖ
class Student {
private:
	int nHakbun;
	const char * nName;
public:
	Student();
	Student(int, const char *);
	void show();
};
Student::Student() {
	nHakbun = 1234;
	nName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}
Student::Student(int nHakbun, const char * nName) {
	this->nHakbun = nHakbun;
	this->nName = nName;
}
void Student::show() {
	cout << "학번은 " << nHakbun << "입니다. " << endl;
	cout << "이름은 " << nName << "입니다. " << endl;
}

int main() {
	Student student[3] = { //생성자 응용
		Student(), Student(2134,"하와"),Student(1234,"wlqrhrh rlfj")
	};
	for (int i = 0; i < 3; i++) {
		student[i].show();
	}
	return 0;
}
//117P