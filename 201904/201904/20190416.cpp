#include<iostream>

using namespace std;

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
	Car(int ton, int price)
	{
		this->ton = ton;
		this->price = price;
		count++;
	}
	static int getCount() {

	//return count+price	=> ���� �߻�, price�� ���� ��� ������ �ƴϾ
	//int num;
	//return num+count �� ���� => �ڱ� �ڽ��� ���� �Ŵϱ� ������.
		return count;
	}
	~Car() {

		cout << "�Ҹ��� : " << count-- << endl;
	}
};
int Car::count = 0;
int main() {

	Car car1;
	cout << "������ �ڵ����� �� : " << car1.getCount() << endl;
	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << car2.getCount() << endl;

	return 0;
}
*/
//���� ��� �Լ�

/*
class Car {
	int ton, price;
public:
	static int count; //���� ������ �Ϲ� �Լ����� ��밡��
	void test() {
		cout << "�׽�Ʈ�Դϴ�" << count << endl;
	}
	int test2() {
		return count;
	}
	int test3() const { //���Ϳ� �ַ� ���̰�, ���� �� ã������? ���δ�?
		return price++;
	}
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
	~Car() { //���α׷� ����� ���� ������ �������� �Ҹ��ڸ� ȣ��
		count--;
	}
};

int Car::count = 0; //main �ۿ��� �ʱⰪ ����
int main() {
	Car car1;
	cout << "������ �ڵ����� �� : " << Car::count << endl; //Ŭ������ ::���� ����
	cout << "������ �ڵ����� �� : " << car1.count << endl; //��ü�� .���� ����

	car1.test();
	cout << "������ �ڵ����� �� : " << Car::count << endl;
	Car car2(10, 3000);
	car1.test();
	cout << "������ �ڵ����� �� : " << Car::count << endl;


	return 0;
}
*/
//��� ��� �Լ�