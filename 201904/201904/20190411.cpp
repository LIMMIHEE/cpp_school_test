#include <iostream>
using namespace std;

/*
class AccessTest {
public :
	void showJumsu();
	void setJumsu(const int data);
	int getJumsu();
private:
	int jumsu;
};
void AccessTest::showJumsu() {
	cout << "���� : " << jumsu << endl;
}
void AccessTest::setJumsu(const int data) {
	jumsu = data;
}
int AccessTest::getJumsu() {
	return jumsu;
}

int main() {
	AccessTest acc;
	acc.setJumsu(99);
	cout << "���� : " << acc.getJumsu() << endl;
	acc.showJumsu();
	
	return 0;
}
*/
//��� ���� ����


/*
class Car {
	int ton, price;
public:
	static int count; //���� ������ �Ϲ� �Լ����� ��밡��
	void test(){
		cout << "�׽�Ʈ�Դϴ�" << count << endl;
	}
	int test2() {
		return count;
	}
	Car() {
		ton = 0; 
		price = 1000; 
		count++;
	}
	Car(int ton, int price){
		this->ton = ton;
		this->price = price;
		count++;
	}
	~Car(){ //���α׷� ����� ���� ������ �������� �Ҹ��ڸ� ȣ��
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
//���� ��� ���� ����
