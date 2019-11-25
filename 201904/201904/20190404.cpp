#include<iostream>

using namespace std;

/*
class Point {
public: // x,y,print() 는 전부 public이 된다
	int x;
	int y;
	void Print(); // 함수 선언
};

int main() {
	
	Point point = { 1,2 };
	point.Print();

	return 0;
}

void Point::Print()
{
	cout << "x좌표는 " << x << endl;
	cout << "y좌표는 " << y << endl;
}
*/
//클래스 연습 1


class Point {
	//private : 생략 가능하다. ( 즉, 디폴트가 private )
	int x;
	int y;
	void Print() {
		cout << "x좌표는 " << x << endl;
		cout << "y좌표는 " << y << endl;
	}
};

int main() {

	//Point point = { 1,2 };  // 멤버의 private
	//point.Print(); // 함수에 private
	//print 함수를 부를때마다 코드에 인라인화가 된다
	return 0;
}


//클래스 연습 2
