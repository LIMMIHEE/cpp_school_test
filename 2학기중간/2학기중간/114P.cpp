#include<iostream>
using namespace std;

class Student{ // ���� �Ӹ� �ƴ϶� �Լ��� ���� �� ����.
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
}