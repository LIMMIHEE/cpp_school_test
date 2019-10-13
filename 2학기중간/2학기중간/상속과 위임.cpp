#include<iostream>
#include<string>
using namespace std;

/*
class Person {
private:
	string name;
	int age;
public:
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;
	}
	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다." << endl;
	}
};
class Student : public Person {
private:
	int id;
public:
	Student(int id, const string& name, int age): Person(name,age) {
		this->id = id;
	}
};
int main() {
	Student student(1234, "홍길동", 33);
	student.ShowPerson();
}
*/
//158

/*
class BaseData {
public:
	BaseData() { cout << "BaseData()" << endl; }
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
protected:
	void PrintData() { cout << "Base::PrintData()" << "		"; }
private:
	int m_nData = 0;
};
class DerivedData :public BaseData {
public:
	DerivedData() { cout << "DerivedData()" << "		"; }
	void TestFunc() {
		PrintData();
		SetData(5);
		cout << BaseData::GetData() << endl;
	}
};
void main() {
	DerivedData data;
	data.SetData(10);
	cout << data.GetData() << endl;
	data.TestFunc();
}
*/
//160


/*
class Person {
	string name;
protected:
	string addr;
};
class Student : Person {
public:
	void setAddr(string addr) {
		this->addr = addr;
	}
	string getAddr() {
		return addr;
	}
};
int main(){
	Student student1;
	student1.setAddr("서울시 관악구 호암로 546번지");
	cout << student1.getAddr() << endl;
	return 0;
}
*/
//162
/*
class Animal {
	string name;
	int weight;
public:
	Animal() { cout << "Animal 생성자()" << endl; }
	~Animal() { cout << "Animal 소멸자()" << endl; }

};
class Dog : public Animal {
	int height;
public:
	Dog(){ cout << "Dog 생성자" << endl; }
	~Dog() { cout << "Dog 소멸자" << endl; }
};
int main() {
	Dog dog;
	return 0;
}
*/
// 164

/*
class Animal {
	int weight, height;
public:
	Animal() { cout << "Animal 생성자()" << endl; }
	Animal(int weight2, int height2) : weight(weight2), height(height2) {
		cout << "Animal 생성자(int weight, int height2)" << endl;
	}
	~Animal() { cout << "Animal 소멸자()" << endl; }
};
class Dog : public Animal {
	int price, volume;
public:
	Dog(int we1, int he1, int pr1, int vo1) : Animal(we1, he1) {
		price = pr1;
		volume = vo1;
		cout << "Dog(int we1, int he1, int pr1, int vo1)" << endl;
	}
	~Dog() {
		cout << "Dog 소멸자" << endl;
	}
};
int main() {
	Dog dog(30, 40, 90, 2000);
	return 0;
}
*/
//165
/*
class Person {
public:
	void PrintMethod() {
		std::cout << "Person's Method " << std::endl;
	}
};
class Student : public Person {
public:
	void PrintMethod() {
		Person::PrintMethod();
		std::cout << "칠드 메소즈" << std::endl;
	}
};
int main() {
	Student student;
	student.PrintMethod();
	return 0;
}
*/
//167

/*
class JimsuOne {
public:
	void FuncOneshow() {
		cout << "JumsuOne" << endl;
	}

};
class RankTwo {
public:
	void FuncTwo() { cout << "Ranktwo" << endl; }
};

class SungjukDerived : protected JimsuOne, protected RankTwo {
public:
	void SungjukFuncShow() {
		FuncOneshow();
		FuncTwo();
	 }
};
int main() {
	SungjukDerived sdr;
	sdr.SungjukFuncShow();
	return 0;
}
*/
//168

/*
class CDelegration {
public:
	int a, b, c, d;

	CDelegration(int a) {
		printf("CD1\n");
		this->a = a;
	}
	CDelegration(int a,int b):CDelegration(a) {
		printf("CD2\n");
		this->b = b;
	}
	CDelegration(int a, int b,int c) :CDelegration(a,b) {
		printf("CD3\n");
		this->c = c;
	}
	CDelegration(int a, int b, int c,int d) :CDelegration(a, b,c) {
		printf("CD4\n");
		this->d = d;
	}
};
int main() {
	CDelegration c(1, 2, 3, 4);
	return 0;
}
*/
//170

/*
class MyClass {
private:
	int x, y, z;
public:
	MyClass(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	friend class FriendClass;
};

class FriendClass {
public:
	FriendClass() {}
	void ShowMyClass() {
		MyClass my(100, 200, 300);
		cout << "x=" << my.x << endl;
		cout << "y=" << my.y << endl;
		cout << "z=" << my.z << endl;
	}
};
int main() {
	FriendClass your;
	your.ShowMyClass();
}
*/
//172

/*
class Credits;
class Student {
private:
	string name;
	string major;
	string hakbun;
public:
	Student(string name, string major, string hakbun) {
		this->name = name;
		this->major = major;
		this->hakbun = hakbun;

	}
	friend void printGrade(Student, Credits);
};
class Credits {
	double grade;
public: 
	Credits(double grade) { this->grade = grade; }
	friend void printGrade(Student, Credits);
};
void printGrade(Student a, Credits b) {
	cout << " 이름 : " << a.name << endl;
	cout << " 학과 : " << a.major << endl;
	cout << " 학번 : " << a.hakbun << endl;
	cout << " 학점 : " << b.grade << endl;

}

int main() {
	Student h("Hongasdknas ", "컴터 ", "!23123");
	Credits g(4.4);
	printGrade(h, g);

	return 0;
}
*/
//173