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
//117P