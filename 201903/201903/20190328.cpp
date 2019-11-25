#include<iostream>

using namespace std;

/*
int sum(int a, int b);
double sum(double a, double b);

int main() {

	cout << sum(1, 2) << endl;
	cout << sum(1.1, 2.2) << endl;

	return 0;
}

int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
*/
//함수 오버로딩 77P

/*
void display(char c = '*', int n = 10) {
	for (int i = 0; i < n; i++) {
		cout << c;
	}
	cout << endl;
}

int main() {
	cout << "아무런 인수가 전달되지 않은 경우 : ";
	display();
	cout << endl;
	cout << "첫번째 인수가 전달 된 경우 : ";
	display('%');
	cout << endl;
	cout << "모든 인수가 전달 된 경우 : ";
	display('^',3);
	cout << endl;

	return 0;
}
*/
//디폴트 매개 변수 79P