#include<iostream>

using namespace std;

/*
int sum(int a, int b, int c = 0, int d = 0) {
	return a + b + c + d;
}

int main() {

	//cout << "sum(10)= " << sum(10) << endl; 는 에러가 난다, b가 값을 못받았음으로
	cout << "sum(10,15)= " << sum(10, 15) << endl;
	cout << "sum(10,15,25)= " << sum(10, 15,25) << endl;
	cout << "sum(10,15,25,30)= " << sum(10, 15,25,30) << endl;

	return 0;
}

*/
//디폴트 매개변수 연습

/*
struct Point {
	int x;
	int y;
}point1; //구조체 전역변수

int main() {
	struct Point point2 = { 3,4 }; //c스타일
	Point point3 = { 1,2 };//C++스타일
	point1.x = 100;//데이커 변경
	point1.y = 300;
	point3.x = 123;
	point3.y = 354;
	
	cout << "점 point 1의 좌표는 (" << point1.x << "," << point1.y << ")" << endl;
	cout << "점 point 2의 좌표는 (" << point2.x << "," << point2.y << ")" << endl;
	cout << "점 point 1의 좌표는 (" << point3.x << "," << point3.y << ")" << endl;
	return 0;
}
*/
//구조체 연습

/*
struct Point {
	int x;
	int y;
};

int main() {
	Point point2 = { 3,4 }; 
	Point *Ppoint = &point2;
	

	cout << "Ppoint가 가르키는 좌표는 (" << (*Ppoint).x << "," << (*Ppoint).y << ")" << endl;
	cout << "Ppoint가 가르키는 좌표는 (" << Ppoint->x << "," << Ppoint->y << ")" << endl; //이렇게 코드 쓰는게 더 바람직 ( 포인트에 포인트. )
	cout << "point2가 가르키는 좌표는 (" << point2.x << "," << point2.y << ")" << endl;

		return 0;
}
*/
//구조체 접근법 연습

/*
struct Point {
	int x;//멤버 변수
	int y;

	void Print() { //멤버 함수
		cout << "x 좌표는 " << x << endl;
		cout << "y 좌표는 " << y << endl;
	}
};

int main() {
	Point point = {1,2};
	point.Print(); //멤버 함수 호출하여  X,Y 값을 출력함
	//Print()함수는 구조체 내부에 함수가 정의 되어있을 경우에
	//Print()함수를 호출할때마다 인라인 화가 되어서 코드가 길어진다. ( 단점 )

	return 0;
}
*/
//구조체 멤버함수 호출 연습

/*
struct Point {
	int x;//멤버 변수
	int y;
	void Print();
};

int main() {
	Point point = { 1,2 };
	point.Print(); //멤버 함수 호출하여  X,Y 값을 출력함

	return 0;
}

void Point::Print() { //함수 정의 
	cout << "x 좌표는 " << x << endl;
	cout << "y 좌표는 " << y << endl;
}
*/
//구조체 멤버 함수 바깥 호출
