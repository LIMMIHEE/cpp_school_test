/*
#include<iostream>
using namespace std;
class BaseData {
public: //������ ���� ����
	BaseData() { cout << "BataData()" << endl; }
	int GetData() { return m_nData; }
	void SetData(int nPrame) { m_nData = nPrame; }
protected: // �Ļ� Ŭ����(�ڽ�)�� ��밡��
	void PrintData() { cout << "BaseData::PrintData()" << " "; }
private://���� �Ұ���
	int m_nData = 0;
};
class DerivedData : public BaseData {
public:
	DerivedData() { cout << "DerivedData()" << "	  "; }
	//�����ڸ� �����ϱ� ���� �θ�Ŭ������ �⺻�����ڰ� ���� �����ȴ�
	//�Ļ�Ŭ������ �����ڸ� �����ϱ� ���� �θ� Ŭ������ �⺻�����ڰ� ���� ����
	void TestFunc() {
		PrintData();
		SetData(5);
		cout << BaseData::GetData() << endl;
	}
};
void main() {
	DerivedData data; //�Ű����� ���� ������ ȣ��(15���� ��)
	data.SetData(10);
	cout << data.GetData() << endl;
	data.TestFunc();
}
*/
//��� 160

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
	//name�� private�̱� ������ ������ ����
	
	void setAddr(string addr) {
		this->addr = addr;//addr�� protected �̱⿡ ���� �����ϴ�
	}
	string getAddr() {
		return addr;
	}
};

int main() {
	Student student1; //�⺻�����ڸ� �����Ϸ��� ������ش�.
	student1.setAddr("���Ǳ� ȣ�Ϸ� 546����");
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
	Animal() { cout << "Animal ������()" << endl; }
	~Animal() { cout << "Animal �Ҹ���()" << endl; }
};
class Dog :Animal {
	int height;
public:
	Dog() { cout << "Dog ������()" << endl; }
	~Dog() { cout << "Dog �Ҹ���()" << endl; }
};
int main() {
	Dog dog;//������ ȣ��� ���� Ŭ������ �����ڰ� ���� ����ǰ� �� �������� ���� Ŭ������ �����ڰ� ���� �ȴ�
	return 0;
	//���α׷� ����� ��ü�� �Ҹ� �ɶ� ���� ��ü�� ���� �Ҹ�ǰ�
	// �� �������� ���� ��ü�� ����ȴ�
}

*/
//164

#include<iostream>
#include<string>
using namespace std;

class Animal {
	int weight, height;
public:
	Animal() { cout << "Animal ������()" << endl; }
	Animal(int weight2, int height2) : weight(weight2),height(height2){
		// weight(weight2),height(height2)�� �Ű����� weight2 height2�� 
		//�ִ� ���� ������� weight height�� ���� �Ǵ� ������� �ʱ�ȭ�� �Ѵ�.
		//�Ϲ� �Լ��� �������� ��� ���� �ʱ�ȭ ��� �Ұ�
		cout << "Animal ������(int weight2, int height2)" << endl;
	}
	~Animal() { cout << "Animal �Ҹ���()" << endl; }
};
class Dog : public Animal {
	int price,volume;
public:
	Dog(int we1,int he1,int pr1,int vo1):Animal(we1,he1) {
		//Animal(we1,he1)�� ���� Ŭ������ �����ڸ� ��������� ȣ���Ѵ�
		//�� �Ű����� 2���� ���� ���� Ŭ������ ������ ȣ���� �Ŀ� ���� Ŭ������
		//�����ڸ� ȣ�� �Ͽ���
		price = pr1;
		volume = vo1;
		cout << "Dog(int we1,int he1,int pr1,int vo1)" << endl;
	}
	~Dog() { cout << "Dog �Ҹ���()" << endl; }
};
int main() {
	Dog dog(30,40,90,2000);//�Ű����� 4���� ���� ������ ȣ��
	//Dog(int we1,int he1,int pr1,int vo1):Animal(we1,he1)  ȣ��
	return 0;
}
