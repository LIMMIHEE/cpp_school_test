#include<iostream>
using namespace std;

class Student{ // 변수 뿐만 아니라 함수도 넣을 수 있음.
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
}