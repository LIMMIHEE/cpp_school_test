#include <iostream>
using namespace std;

/*class Student{ // ���� �Ӹ� �ƴ϶� �Լ��� ���� �� ����.
private:
	int nHakbun;
	const char * sName;
public:
	Student(); //������ ����
	// �����ڴ� ��ü ������ ���ÿ� �ʱ�ȭ�� ���� �ϱ� ������ ���� ���а� �������� ����.
	void show(); // �Լ� ����
};
Student::Student() { // ������ ����
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}
void Student::show() {// �Լ� ����
	cout << "�й��� :" << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� : " << sName << "�Դϴ�." << endl;
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
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}

Student::Student(int nHakbun, const char* sName) {
	this->nHakbun = nHakbun;
	this->sName = sName;
}
void Student::show() {
	cout << "�й��� " << nHakbun << endl;
	cout << "�̸��� " << sName << "�Դϴ�. " << endl;
}
int main() {
	Student student1;
	Student student2(2398, "������");
	student1.show();
	student2.show();
}
*/
//115��

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
	nName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
Student::Student(int nHakbun, const char * nName) {
	this->nHakbun = nHakbun;
	this->nName = nName;
}
void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�. " << endl;
	cout << "�̸��� " << nName << "�Դϴ�. " << endl;
}

int main() {
	Student student[3] = { //������ ����
		Student(), Student(2134,"�Ͽ�"),Student(1234,"wlqrhrh rlfj")
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
		cout << " �̸� : " << name << endl;
		cout << "���� : " << age << endl;
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

////////////////////// ������� ������ �Ҹ���



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
	cout << "���� : " << jumsu << endl;
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
	cout << "���� : " << access.getJumsu() << endl;
	return 0;
}
*/
//123
////////////////////// ������


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
int Car::count = 0;	//���� ���� �ʱ�ȭ
int main() {
	Car car1;
	cout << " ������ �ڵ����� �� : " << Car::count << endl;
	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << Car::count << endl;
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
	cout << "������ �ڵ����� �� : " << car1.getCount() << endl;
	Car car2;
	cout << "������ �ڵ����� �� : " << car2.getCount() << endl;
}
*/
//126

////////////////////// �������