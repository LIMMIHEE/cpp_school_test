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

	//return count+price	=> 오류 발생, price는 정적 멤버 변수가 아니어서
	//int num;
	//return num+count 는 가능 => 자기 자신이 만든 거니까 가능함.
		return count;
	}
	~Car() {

		cout << "소멸자 : " << count-- << endl;
	}
};
int Car::count = 0;
int main() {

	Car car1;
	cout << "생성된 자동차의 수 : " << car1.getCount() << endl;
	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << car2.getCount() << endl;

	return 0;
}
*/
//정적 멤버 함수

/*
class Car {
	int ton, price;
public:
	static int count; //정적 변수는 일반 함수에서 사용가능
	void test() {
		cout << "테스트입니다" << count << endl;
	}
	int test2() {
		return count;
	}
	int test3() const { //벡터에 주로 붙이고, 오류 잘 찾으려고? 붙인다?
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
	~Car() { //프로그램 종료시 객페 생성의 역순으로 소멸자를 호출
		count--;
	}
};

int Car::count = 0; //main 밖에서 초기값 설정
int main() {
	Car car1;
	cout << "생성된 자동차의 수 : " << Car::count << endl; //클래스는 ::으로 연결
	cout << "생성된 자동차의 수 : " << car1.count << endl; //객체는 .으로 연결

	car1.test();
	cout << "생성된 자동차의 수 : " << Car::count << endl;
	Car car2(10, 3000);
	car1.test();
	cout << "생성된 자동차의 수 : " << Car::count << endl;


	return 0;
}
*/
//상수 멤버 함수