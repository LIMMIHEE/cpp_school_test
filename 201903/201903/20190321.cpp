#include<iostream>

using namespace std;

/*
int sum(int opr1, int opr2) {
	return opr1 + opr2;
}

void display();

int main() {
	int a=2; b=3;

	int p = sum(a, b);
	cout << "sum 함수를 호출하고 얻은 결과 값은 " << p << endl;
	display();

	return 0;
}

void display() {
	cout << "display 함수는 반환성이 없는 함수" << endl;
	return;
}
*/
//함수 

/*
#define multiple_define(A) ((A)*(A))
int multiple_inline(int A);
//정의한 함구가 너무긴 경우에는 인라인 함수호출을 여러번 하게 되면
//호출한 함수 ( 대부분main )의 코드가 길어지는 단점이 있다.
//따라서 인라인 함수 정의는 함수 코드의 길이가 작을때 유용하다.

int main() {
	int a = 3;
	cout << "inline 함수의 값은 " << multiple_inline(++a) << endl;
	a = 3;
	cout << "defien 매크로의 값은 " << multiple_define(++a) << endl;
	return 0;
}

inline int multiple_inline(int A) {

	return A * A;

}
*/
//인라인 함수

#include<cstdlib>
void p(int a, int b) { cout << a + b << endl; }

int main() {
	char str[] = "100";
	int a = 200;
	int b = atoi(str); //atoi함수는 숫자형태 문자열을 정수형으로 바꿔준다.
	p(a, b);
}