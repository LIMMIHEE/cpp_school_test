#include<iostream>
/*
using namespace std;



int same = 2; //지역변수
int global = 2;

int main() {
	/*
	int same = 3; //지역변수 (함수의 매개변수도 포함 )
	//지역변수는 함수 또는 범위를 벗어나는 순간 소멸.
	cout << "전역 변수라면 2를 지역변수라면 3을 출력합니다" << endl;
	cout << "변수 same " << same << endl;
	cout << "변수 global은 " << global << endl;

	return 0;




}

*/
//지역 전역 변수

/*
using namespace std;

void jungjuk() {
	static int a = 0;
	cout << "정적변수 a는 " << a << endl;
	a++;
}

int main() {
	jungjuk(); 
	jungjuk();
	jungjuk();

	return 0;
}
*/
//정적 변수

/*
using namespace std;

int main() {
	int num = 1;
	int *ptr1 = &num;
	int *ptr2 = &num;
	int *ptr3, ptr4;
	int *ptr5, *ptr6;
	ptr3 =&num, ptr4=1;
	ptr5 = &num, ptr6 = &num;

	cout << "ptr1은 int *형이며 값은 " << ptr1 << endl;
	cout << "ptr2은 int *형이며 값은 " << ptr2 << endl;
	cout << "ptr3은 int *형이며 값은 " << ptr3 << endl;
	cout << "ptr4은 int *형이며 값은 " << ptr4 << endl;
	cout << "ptr5은 int *형이며 값은 " << ptr5 << endl;
	cout << "ptr6은 int *형이며 값은 " << ptr6 << endl;
}
*/
//포인터

using namespace std;

int main(){
	int a = 3;
	int * ptr = &a; //ptr은 변수명 a와 같다

	cout<< "a의 주소값을 참조합니다.	" << ptr << endl;
	cout << "a의 값을 간접 참조합니다.	" << *ptr << endl;

	*ptr = 10;
	cout << "a의 값을 간접참조로 접근합니다. " << *ptr << endl;
	cout << "a의 주소 값을 바뀌지 않습니다.	" << ptr << endl;
	
	return 0;
}