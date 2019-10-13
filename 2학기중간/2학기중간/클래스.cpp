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

/*
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
*/
//117P

/*
class Student {
private:
	char *name;
	int age;
public:
	Student(const char * myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void ShowStudentInfo() {
		cout << " 이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Student() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void) {
	Student student1("lee mee rim", 33);
	Student student2("hong Pa wo", 23);
	student1.ShowStudentInfo();
	student2.ShowStudentInfo();
	return 0;
}
*/
//120

////////////////////// 여기까지 생성자 소멸자



/*
class AccessTest {
public:
	void ShowJumsu();
	void setJumsu(const int data);
	int getJumsu();
private:
	int jumsu;
};
void AccessTest::ShowJumsu() {
	cout << "점수 : " << jumsu << endl;
}
void AccessTest::setJumsu(const int data) {
	jumsu = data;
}
int AccessTest::getJumsu() {
	return jumsu;
}
int main() {
	AccessTest access;
	access.setJumsu(90);
	cout << "점수 : " << access.getJumsu() << endl;
	return 0;
}
*/
//123
////////////////////// 사용권한


/*
class Car {
	int ton, price;
public:
	static int count;
	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton = ton;
		this->price = price;
		count++;
	}
	~Car() {
		count--;
	}
};
int Car::count = 0;	//정적 변수 초기화
int main() {
	Car car1;
	cout << " 생성된 자동차의 수 : " << Car::count << endl;
	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << Car::count << endl;
	return 0;
}
*/
//125

/*
class Car {
	int ton;
	int price;
public:
	static int count;
	Car() {
		ton = 0;
		price = 1000;
		count++;
	}
	Car(int ton, int price) {
		this->ton = ton;
		this->price = price;
		count++;
	}
	static int getCount() {
		return count;
	}
};
int Car::count = 0;
int main() {
	Car car1;
	cout << "생성된 자동차의 수 : " << car1.getCount() << endl;
	Car car2;
	cout << "생성된 자동차의 수 : " << car2.getCount() << endl;
}
*/
//126

////////////////////// 정적멤버