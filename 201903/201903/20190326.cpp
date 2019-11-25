#include<iostream>
using namespace std;

/*
int square_sum(int num) { //call by value(매개변수에 값을 전달)
	num *= num;
	return num + num;
}

int main() {
	int a = 3;
	cout << square_sum(a) << endl;
	cout << "a값이 바뀌었다면 9가 출력됩니다 : " << a << endl;
}
*/
//call by value 73P

/*
int square_sum(int *num) { //call by pointer(매개변수에 주소값을 전달)
	*num *= *num;
	return (*num) + (*num);
}

int main() {
	int a = 3;
	cout << square_sum(&a) << endl;
	cout << "a값이 바뀌었다면 9가 출력됩니다 : " << a << endl;
}
*/
//call by pointer 

/*
int square_sum(int &num) { //call by pointer(참조형)
	num *= num;
	return num + num;
}

int main() {
	int a = 3;
	cout << square_sum(a) << endl;
	cout << "a값이 바뀌었다면 9가 출력됩니다 : " << a << endl;
}
*/
//call by reference
//74P

/*
void swap_value(int num1,int num2) {
	int sum=0;
	sum = num1;
	num1 = num2;
	num2 = sum;

}
void swap_pointer(int *num1, int *num2) {
	int sum = 0;
	sum = *num1;
	*num1 = *num2;
	*num2 = sum;

}
void swap_ref(int &num1, int &num2) {
	int sum = 0;
	sum = num1;
	num1 = num2;
	num2 = sum;

}


int main() {
	int num1=0, num2=0;
	cout << "2개의 정수를 입력해 주세요 : " << endl;
	cin >> num1;
	cin >> num2;

	cout << "바꾸기 전 : " << num1 << " " << num2 << endl;
	swap_value(num1, num2);
	cout << "값이 바뀌었다면 순서가 바뀌어 출력됩니다 : " << num1 << " " << num2 << "\n" << endl;

	cout << "바꾸기 전 : " << num1 << " " << num2 << endl;
	swap_pointer(&num1, &num2);
	cout << "값이 바뀌었다면 순서가 바뀌어 출력됩니다 : " << num1 << " " << num2 << "\n" << endl;

	cout << "바꾸기 전 : " << num1 << " " << num2 << endl;
	swap_ref(num1, num2);
	cout << "값이 바뀌었다면 순서가 바뀌어 출력됩니다 : " << num1 << " " << num2 << "\n" << endl;
}
*/
//call by reference  | call by pointer |   call by value 연습