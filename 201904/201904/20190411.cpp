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
	cout << "점수 : " << jumsu << endl;
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
	cout << "점수 : " << acc.getJumsu() << endl;
	acc.showJumsu();
	
	return 0;
}
*/
//사용 권한 연습


/*
class Car {
	int ton, price;
public:
	static int count; //정적 변수는 일반 함수에서 사용가능
	void test(){
		cout << "테스트입니다" << count << endl;
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
	~Car(){ //프로그램 종료시 객페 생성의 역순으로 소멸자를 호출
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
//정적 멤버 변수 연습
