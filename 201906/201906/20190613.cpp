
/*
#include<iostream>
class Person
{
public:
	void PrintMethod() {
		std::cout << "Person's Method" << std::endl;
	}
};
class Student : public Person
{
public : 
	void PrintMethod() {
		Person::PrintMethod();
		//Person 클래스의 PrintMethod 호출
		std::cout << "child Method" << std::endl;
	}
};

int main() {
	Student student;
	student.PrintMethod();
	return 0;
}
*/
#include<iostream>
using namespace std;
class JumsuOne {
public:
	void FuncOneShow() {
		cout << "JunsuOne" << endl;
	}
};
class RankTwo {
public: void FuncTwoShow() { cout << "RankTwo" << endl; }

};
class SungjukDerived :protected JumsuOne, protected RankTwo {
	//파생클래스 :  SungjukDerived		기초 클래스:JumsuOne    RankTwo
public: 
	void SungjukFuncShow() {
		FuncOneShow();
		FuncTwoShow();
	}
};

int main() {
	SungjukDerived sdr;
	sdr.SungjukFuncShow();
	return 0;
}