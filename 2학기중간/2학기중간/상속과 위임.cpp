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
		cout << name << "�� ���̴� " << age << "�Դϴ�." << endl;
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
	Student student(1234, "ȫ�浿", 33);
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
	student1.setAddr("����� ���Ǳ� ȣ�Ϸ� 546����");
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
	Animal() { cout << "Animal ������()" << endl; }
	~Animal() { cout << "Animal �Ҹ���()" << endl; }

};
class Dog : public Animal {
	int height;
public:
	Dog(){ cout << "Dog ������" << endl; }
	~Dog() { cout << "Dog �Ҹ���" << endl; }
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
	Animal() { cout << "Animal ������()" << endl; }
	Animal(int weight2, int height2) : weight(weight2), height(height2) {
		cout << "Animal ������(int weight, int height2)" << endl;
	}
	~Animal() { cout << "Animal �Ҹ���()" << endl; }
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
		cout << "Dog �Ҹ���" << endl;
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
		std::cout << "ĥ�� �޼���" << std::endl;
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
	cout << " �̸� : " << a.name << endl;
	cout << " �а� : " << a.major << endl;
	cout << " �й� : " << a.hakbun << endl;
	cout << " ���� : " << b.grade << endl;

}

int main() {
	Student h("Hongasdknas ", "���� ", "!23123");
	Credits g(4.4);
	printGrade(h, g);

	return 0;
}
*/
//173