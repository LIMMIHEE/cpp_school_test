#include<iostream>
using namespace std;

/*
int square_sum(int num) { //call by value(�Ű������� ���� ����)
	num *= num;
	return num + num;
}

int main() {
	int a = 3;
	cout << square_sum(a) << endl;
	cout << "a���� �ٲ���ٸ� 9�� ��µ˴ϴ� : " << a << endl;
}
*/
//call by value 73P

/*
int square_sum(int *num) { //call by pointer(�Ű������� �ּҰ��� ����)
	*num *= *num;
	return (*num) + (*num);
}

int main() {
	int a = 3;
	cout << square_sum(&a) << endl;
	cout << "a���� �ٲ���ٸ� 9�� ��µ˴ϴ� : " << a << endl;
}
*/
//call by pointer 

/*
int square_sum(int &num) { //call by pointer(������)
	num *= num;
	return num + num;
}

int main() {
	int a = 3;
	cout << square_sum(a) << endl;
	cout << "a���� �ٲ���ٸ� 9�� ��µ˴ϴ� : " << a << endl;
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
	cout << "2���� ������ �Է��� �ּ��� : " << endl;
	cin >> num1;
	cin >> num2;

	cout << "�ٲٱ� �� : " << num1 << " " << num2 << endl;
	swap_value(num1, num2);
	cout << "���� �ٲ���ٸ� ������ �ٲ�� ��µ˴ϴ� : " << num1 << " " << num2 << "\n" << endl;

	cout << "�ٲٱ� �� : " << num1 << " " << num2 << endl;
	swap_pointer(&num1, &num2);
	cout << "���� �ٲ���ٸ� ������ �ٲ�� ��µ˴ϴ� : " << num1 << " " << num2 << "\n" << endl;

	cout << "�ٲٱ� �� : " << num1 << " " << num2 << endl;
	swap_ref(num1, num2);
	cout << "���� �ٲ���ٸ� ������ �ٲ�� ��µ˴ϴ� : " << num1 << " " << num2 << "\n" << endl;
}
*/
//call by reference  | call by pointer |   call by value ����