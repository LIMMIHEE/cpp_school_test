#include <iostream>
#include <string>
using namespace std;


/*
class Student {
private:
	int Num;//��� ���� ����
	const char*name;
public:
	Student(); //������ ����
	Student(int, const char*);
	void show(); // �Լ�����
};

Student::Student() { // ������ ����
	Num = 1234;
	name = "����";
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}

Student::Student(int num,const char* name) { // ������ ����
	Num = num;
	this->name = name;
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}

void Student::show() { //�Լ� ����
	cout << "�й��� " << Num << endl;
	cout << "�̸��� " << name << endl;
}

int main() {
	Student student1; //��ü ������ �Ű������� ���� ������ �Լ��� ȣ���Ѵ�. 
	Student student2(0225,"���� ���������"); //�Ű������� 2�� ���� �������� ȣ��
	student1.show();
	student2.show();

	return 0;

}
*/
//class ����

/*
class Student {
private:
	int Num;//��� ���� ����
	const char*name;
public:
	Student(); //������ ����
	Student(int, const char*);
	void show(); // �Լ�����
};

Student::Student() { // ������ ����
	Num = 1234;
	name = "����";
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}

Student::Student(int Num, const char* name) { // ������ ����
	this->Num = Num;
	this->name = name;
}

void Student::show() { //�Լ� ����
	cout << "�й��� " << Num;
	cout << "�̸��� " << name << endl;
}

int main() {

	Student student[3] = {	//�迭 ���·� ��ü�� �����Ҽ� �ִ�. 3���� ��ü �������,
							// ��ü ������ �ٷ� ������ ȣ��. �� �Ű������� ���� �����ڸ� ã�ư���,
	Student(), //��ü ������ �Ű������� ���� ������ �Լ��� ȣ���Ѵ�. 
	Student(0225, "���� ���������"), //�Ű������� 2�� ���� �������� ȣ��
	Student(29,"����� ���Ǻ�")
	};
	
	for(int i = 0; i < 3; i++) {
		student[i].show();
	}

	return 0;

}
*/
//Ŭ���� �迭 ���·� �����ϴ°� ����


class Student {
private:
	char *name;
	int age;
public:
	Student(const char * myname, int myage) {
		int len = strlen(myname) + 1;  //my name�� ���ڿ� ���� +1; ( �� �� ���ϱ� ^^ )
		name = new char[len]; //�����Ҵ��� �� 
		strcpy_s(name, len, myname);//myname�� �ִ� ���ڿ��� len ���� ��ŭ ī���ϰ� name�� �־��ش�
		age = myage;
	}
	void showStudentInfo() {
		cout << "�̸� :" << this->name << endl; 
		cout << "���� :" << this->age << endl; 
	}
	~Student() {//�Ҹ��� ȣ���� ��ü ������ �������� ȣ���� �Ͼ��.
		//�Ҹ��ڴ� ȣ���� ���α׷��� ����Ǳ� �ٷ� ���� ȣ��ȴ�.
		delete[] name; 
		//name�� �����Ҵ��� �޾ұ� ������ �Ҵ�� ���	 �迭�� �����Ѵ�.(�޸� ��ü��?)
		//���࿡  []�� ���ְ� "delete name"�� ���� 
		//ù��° ��Ҹ� ���� �ȴ� ( [0]�� ����ִ°Ÿ� )
		cout << "called destrctor!" << age<< endl;
	}
};	

int main(){
	Student student1("asdasdasd", 55); //�Ű����� 2���� ������ �θ���
	Student student2("���� ��ġ��Ű����", 24);
	student1.showStudentInfo();
	student2.showStudentInfo();
	return 0;
};