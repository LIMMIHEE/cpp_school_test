/*
#include<iostream>
using namespace std;
class BaseData {
public: //누구나 접근 가능
	BaseData() { cout << "BataData()" << endl; }
	int GetData() { return m_nData; }
	void SetData(int nPrame) { m_nData = nPrame; }
protected: // 파생 클래스(자식)만 사용가능
	void PrintData() { cout << "BaseData::PrintData()" << " "; }
private://접근 불가능
	int m_nData = 0;
};
class DerivedData : public BaseData {
public:
	DerivedData() { cout << "DerivedData()" << "	  "; }
	//생성자를 실행하기 전에 부모클래스의 기본생성자가 먼저 생성된다
	//파생클래스의 생성자를 실행하기 전에 부모 클래스의 기본생성자가 먼저 실행
	void TestFunc() {
		PrintData();
		SetData(5);
		cout << BaseData::GetData() << endl;
	}
};
void main() {
	DerivedData data; //매개변수 없는 생성자 호출(15번쨰 줄)
	data.SetData(10);
	cout << data.GetData() << endl;
	data.TestFunc();
}
*/
//상속 160

/*
#include<iostream>
#include<string>
using namespace std;
class Person {
	string name;
protected:
	string addr;
};

class Student : Person {
public:
	
		void setname(string name) {
		this->name = name;
	}
	//name이 private이기 때문에 에러가 난다
	
	void setAddr(string addr) {
		this->addr = addr;//addr은 protected 이기에 접근 가능하다
	}
	string getAddr() {
		return addr;
	}
};

int main() {
	Student student1; //기본생성자를 컴파일러가 만들어준다.
	student1.setAddr("관악구 호암로 546번지");
	cout << student1.getAddr() << endl;
	return 0;
}
*/
//162P 

/*
#include<iostream>
#include<string>
using namespace std;

class Animal {
	string name;
	int weight;
public: 
	Animal() { cout << "Animal 생성자()" << endl; }
	~Animal() { cout << "Animal 소멸자()" << endl; }
};
class Dog :Animal {
	int height;
public:
	Dog() { cout << "Dog 생성자()" << endl; }
	~Dog() { cout << "Dog 소멸자()" << endl; }
};
int main() {
	Dog dog;//생성자 호출시 상위 클래스의 생성자가 먼저 실행되고 그 다음으로 하위 클래스의 생성자가 실행 된다
	return 0;
	//프로그램 종료시 객체가 소멸 될때 하위 객체가 먼저 소멸되고
	// 그 ㄷ음으로 상위 객체가 실행된다
}

*/
//164

#include<iostream>
#include<string>
using namespace std;

class Animal {
	int weight, height;
public:
	Animal() { cout << "Animal 생성자()" << endl; }
	Animal(int weight2, int height2) : weight(weight2),height(height2){
		// weight(weight2),height(height2)는 매개변수 weight2 height2에 
		//있는 값을 멤버변수 weight height에 저장 되는 멤버변수 초기화를 한다.
		//일반 함수의 값에서는 멤버 변수 초기화 사용 불가
		cout << "Animal 생성자(int weight2, int height2)" << endl;
	}
	~Animal() { cout << "Animal 소멸자()" << endl; }
};
class Dog : public Animal {
	int price,volume;
public:
	Dog(int we1,int he1,int pr1,int vo1):Animal(we1,he1) {
		//Animal(we1,he1)은 상위 클래스의 생성자를 명시적으로 호출한다
		//즉 매개변수 2개를 갖는 상위 클래스의 생성자 호출한 후에 하위 클래스의
		//생성자를 호출 하였다
		price = pr1;
		volume = vo1;
		cout << "Dog(int we1,int he1,int pr1,int vo1)" << endl;
	}
	~Dog() { cout << "Dog 소멸자()" << endl; }
};
int main() {
	Dog dog(30,40,90,2000);//매개변수 4개를 갖는 생성자 호출
	//Dog(int we1,int he1,int pr1,int vo1):Animal(we1,he1)  호출
	return 0;
}
