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
	cout << "sum �Լ��� ȣ���ϰ� ���� ��� ���� " << p << endl;
	display();

	return 0;
}

void display() {
	cout << "display �Լ��� ��ȯ���� ���� �Լ�" << endl;
	return;
}
*/
//�Լ� 

/*
#define multiple_define(A) ((A)*(A))
int multiple_inline(int A);
//������ �Ա��� �ʹ��� ��쿡�� �ζ��� �Լ�ȣ���� ������ �ϰ� �Ǹ�
//ȣ���� �Լ� ( ��κ�main )�� �ڵ尡 ������� ������ �ִ�.
//���� �ζ��� �Լ� ���Ǵ� �Լ� �ڵ��� ���̰� ������ �����ϴ�.

int main() {
	int a = 3;
	cout << "inline �Լ��� ���� " << multiple_inline(++a) << endl;
	a = 3;
	cout << "defien ��ũ���� ���� " << multiple_define(++a) << endl;
	return 0;
}

inline int multiple_inline(int A) {

	return A * A;

}
*/
//�ζ��� �Լ�

#include<cstdlib>
void p(int a, int b) { cout << a + b << endl; }

int main() {
	char str[] = "100";
	int a = 200;
	int b = atoi(str); //atoi�Լ��� �������� ���ڿ��� ���������� �ٲ��ش�.
	p(a, b);
}