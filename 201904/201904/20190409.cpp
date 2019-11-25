#include <iostream>
#include <string>
using namespace std;


/*
class Student {
private:
	int Num;//멤버 변수 선언
	const char*name;
public:
	Student(); //생성자 선언
	Student(int, const char*);
	void show(); // 함수선언
};

Student::Student() { // 생성자 정의
	Num = 1234;
	name = "리부";
	cout << "학번이 등록되었습니다" << endl;
}

Student::Student(int num,const char* name) { // 생성자 정의
	Num = num;
	this->name = name;
	cout << "학번이 등록되었습니다" << endl;
}

void Student::show() { //함수 정의
	cout << "학번은 " << Num << endl;
	cout << "이름은 " << name << endl;
}

int main() {
	Student student1; //객체 생성시 매개변수가 없는 생성자 함수를 호출한다. 
	Student student2(0225,"립토 최케허버버"); //매개변수를 2개 같은 ㄴ생성자 호충
	student1.show();
	student2.show();

	return 0;

}
*/
//class 연습

/*
class Student {
private:
	int Num;//멤버 변수 선언
	const char*name;
public:
	Student(); //생성자 선언
	Student(int, const char*);
	void show(); // 함수선언
};

Student::Student() { // 생성자 정의
	Num = 1234;
	name = "리부";
	cout << "학번이 등록되었습니다" << endl;
}

Student::Student(int Num, const char* name) { // 생성자 정의
	this->Num = Num;
	this->name = name;
}

void Student::show() { //함수 정의
	cout << "학번은 " << Num;
	cout << "이름은 " << name << endl;
}

int main() {

	Student student[3] = {	//배열 형태로 객체를 생성할수 있다. 3개의 객체 만들어짐,
							// 객체 생성시 바로 생성자 호출. 각 매개변수에 따라 생성자를 찾아간다,
	Student(), //객체 생성시 매개변수가 없는 생성자 함수를 호출한다. 
	Student(0225, "립토 최케허버버"), //매개변수를 2개 같은 ㄴ생성자 호충
	Student(29,"백망되 보실븐")
	};
	
	for(int i = 0; i < 3; i++) {
		student[i].show();
	}

	return 0;

}
*/
//클래스 배열 형태로 생성하는거 연습


class Student {
private:
	char *name;
	int age;
public:
	Student(const char * myname, int myage) {
		int len = strlen(myname) + 1;  //my name의 문자열 길이 +1; ( 널 값 더하기 ^^ )
		name = new char[len]; //동적할당이 됨 
		strcpy_s(name, len, myname);//myname에 있는 문자열을 len 길이 만큼 카피하고 name에 넣어준다
		age = myage;
	}
	void showStudentInfo() {
		cout << "이름 :" << this->name << endl; 
		cout << "나이 :" << this->age << endl; 
	}
	~Student() {//소멸자 호출은 객체 생성의 역순으로 호출이 일어난다.
		//소멸자는 호출이 프로그램이 종료되기 바로 전에 호출된다.
		delete[] name; 
		//name은 동적할당을 받았기 때문에 할당된 모든	 배열을 삭제한다.(메모리 자체를?)
		//만약에  []를 없애고 "delete name"로 쓰면 
		//첫번째 요소만 삭제 된다 ( [0]에 들어있는거만 )
		cout << "called destrctor!" << age<< endl;
	}
};	

int main(){
	Student student1("asdasdasd", 55); //매개변수 2개의 생성자 부른다
	Student student2("립토 돗치스키가자", 24);
	student1.showStudentInfo();
	student2.showStudentInfo();
	return 0;
};