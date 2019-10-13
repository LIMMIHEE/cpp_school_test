#include<iostream>
#include<string>
using namespace std;

/*
int main() {
	int * ptr1 = new int;
	*ptr1 = 20;
	cout << *ptr1 << endl;
	return 0;
}
*/
//132

/*
void main() {
	int * ptr2 = new int[4];
	for (int i = 0; i < 4; i++) {
		ptr2[i] = 10 + i;
		cout << ptr2[i]<< " 	";
	}

	delete[] ptr2;
}
*/
//133

/*
class TestC {
	int iData;
public:
	TestC() {
		cout << "TestC :: TestC()" << endl;
	}
	~TestC() {
		cout << "TestC::~TestC()" << endl;
	}
};
int main() {
	cout << "main begin" << endl;
	TestC* ptr = new TestC;
	cout << "Test Cplus :" << endl;
	delete ptr;
	cout << "end" << endl;
	return 0;
}
*/
//134
/*
class TestC {
	int iData;
public:
	TestC() { cout << "TestC::TesrC()" << endl; }
	~TestC() { cout << "TestC::~TestC()" << endl; }
};
int main() {
	TestC* ptr = new TestC[3];
	delete[] ptr;
	cout << "end" << endl;
	return 0;
}*/
//135

/*
class Cat {
private:
	int age;
	const char* name;// 문자열을 선언과 동시에 초기화 할때는 const 붙는다.
public:
	Cat(){
		age = 18; 
		name = "야옹이"; // 초기화라 const 사용가능
	}
	~Cat() {	}
	int getAge() { return age; }
	void setAge(int age) { this->age = age; }
	char * getName() { return (char*)name; }
	void setName(const char *name) { this->name = name; }//문자열을 받을때는 반드시 이렇게? 사실 잘 모르겟음
};
int main() {
	Cat* pCat = new Cat;
	cout << "고양이의 나이 : " << (*pCat).getAge() << endl;
	cout << "고양이의 이름 : " << pCat->getName() << endl;
	pCat->setAge(15);
	(*pCat).setName("방울이");
	cout << "고양이의 나이 : " << (*pCat).getAge() << endl;
	cout << " 고양이의 이름 : " << pCat->getName() << endl;

	return 0;
}
*/
//136

/*
class Cat {
private:
	int * pAge = new int;
	const char *  pName = new char;
public:
	Cat(){
		*pAge = 18;
		pName = "야옹이";
	}
	~Cat() {
		delete pAge;
		delete pName;
	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age;}
	char * getName() { return (char*)pName; }
	void setName(const char * name) { pName = name; }
};
int main() {
	Cat * pCat = new Cat;
	cout << " 고양이 나이: " << pCat->getAge() << endl;
	cout << " 고양이 이름: " << (*pCat).getName() << endl;
	pCat->setAge(20);
	(*pCat).setName("점액질 개새끼");
	cout << "고양이 나이:" << (*pCat).getAge() << endl;
	cout << "고양이 이름 : " << pCat->getName() << endl;
	return 0;
}
*/
//138

/*
class Student {
private:
	int grade;
	int ban;
public:
	Student() {
		grade = 3;
		ban = 8;
	}
	~Student() {}
	void setGrade(int grade) { this->grade = grade; }
	int getGrade() { return grade; }
	void setBan(int ban) { this->ban = ban; }
	int getBan() { return ban; }
};

int main() {
	Student student;
	cout << "학년 : " << student.getGrade() << endl;
	cout << "반 : " << student.getBan() << endl;
	student.setBan(4);
	student.setGrade(4);
	cout << "학년 : " << student.getGrade() << endl;
	cout << "반 : " << student.getBan() << endl;

	return 0;
}
*/
//139

/////////////////////////new 연산자와 delete 연산자

/*
class MyPerson {
public:
	MyPerson() { cout << "MyPerson()" << endl; }
	//복사 생성자 선언 및 정의
	MyPerson(const MyPerson &rhs) {
		this->nAge = rhs.nAge;
		cout << "MyPersin(const MyPersin &)" << endl;
	}
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
int main() {
	MyPerson p1;
	p1.setData(20);

	MyPerson p2(p1);
	cout << "Person의 나이 : " << p2.getData() << endl;
	return 0;
}
*/
//142

/*
class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam) {
		cout << "MyPersin()" << endl;
	}
	MyPerson(const MyPerson &rhs) :nAge(rhs.nAge) {
		cout << "MyPerson(const MyPerson &)" << endl;

	}
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
void TEstFunc(MyPerson param) {
	cout << "TestFunc" << endl;
	param.setData(50);
}
int main() {
	cout << "******** Begin ~~~~~~~" << endl;
	MyPerson p1(30);
	TEstFunc(p1);
	cout << "p1: " << p1.getData() << endl;
	cout << "******End**********" << endl;
	return 0;
}
*/
//144
/*
class Person {
	char * name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	Person(const Person &rhs) {
		cout << "MyPerson(const MyPerson &)" << endl;
		name = new char[strlen(rhs.name)+1];
		strcpy_s(name, strlen(rhs.name) + 1,rhs.name);
		age = rhs.age+1;

	}
	void ShowPrson() const {
		cout << "이름: " << name << " ";
		cout << " 나이 : " << age << endl;

	}
	~Person() { 
		delete[] name;
	cout << "called destructor!" << endl;
	}
};
int main() {
	Person man1("lee mee rrim", 23);
	Person man2(man1);
	man1.ShowPrson();
	man2.ShowPrson();
	return 0;
}
*/
//146
/*
class MyData {
public:
	MyData(int nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
	}
	MyData(const MyData &rhs) {
		cout << "CMDyata(const MyData &)" << endl;
		m_pnData = new int;
	*m_pnData = *rhs.m_pnData;
	}
	int GetData() {
		if (m_pnData != NULL) {
			return *m_pnData;
		}

		return 0;
	}
private:
	int *m_pnData = nullptr;
};
int main() {
	MyData a(10);
	MyData b(a);
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;
	return 0;
}
*/
//147
/*
class Boxnum{
private:
	int num1, num2;
public:
	Boxnum(int num1, int num2) : num1(num1), num2(num2){}
	void ShowNum() {
		cout << " num1: " << num1 << ", num2 : " << num2 << endl;
	}
	Boxnum operator+(Boxnum &ref) {
		return Boxnum(num1 + ref.num1, num2 + ref.num2);
	}
};

int main() {
	Boxnum nb1(10, 20);
	Boxnum nb2(3, 4);
	Boxnum result = nb1 + nb2;
	nb1.ShowNum();
	nb2.ShowNum();
	result.ShowNum();
}
*/
//150
/*
class Student {
private:
	char * name;
	int age;
public:
	Student(const char * name, int age) : age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
	}
	void Showinfo() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	Student& operator=(Student& ref) {
		delete[] name;
		name = new char[20];
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		delete[] name;
		cout << "~Student 소멸자 호출" << endl;
	}
};
int main() {
	Student st1("미림인",23);
	Student st2("미리리리임 인",21);
	st2 = st1;
	st1.Showinfo();
	st2.Showinfo();
	return 0;
}
*/
//151