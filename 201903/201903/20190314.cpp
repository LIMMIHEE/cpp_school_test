#include<iostream>
/*
using namespace std;



int same = 2; //��������
int global = 2;

int main() {
	/*
	int same = 3; //�������� (�Լ��� �Ű������� ���� )
	//���������� �Լ� �Ǵ� ������ ����� ���� �Ҹ�.
	cout << "���� ������� 2�� ����������� 3�� ����մϴ�" << endl;
	cout << "���� same " << same << endl;
	cout << "���� global�� " << global << endl;

	return 0;




}

*/
//���� ���� ����

/*
using namespace std;

void jungjuk() {
	static int a = 0;
	cout << "�������� a�� " << a << endl;
	a++;
}

int main() {
	jungjuk(); 
	jungjuk();
	jungjuk();

	return 0;
}
*/
//���� ����

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

	cout << "ptr1�� int *���̸� ���� " << ptr1 << endl;
	cout << "ptr2�� int *���̸� ���� " << ptr2 << endl;
	cout << "ptr3�� int *���̸� ���� " << ptr3 << endl;
	cout << "ptr4�� int *���̸� ���� " << ptr4 << endl;
	cout << "ptr5�� int *���̸� ���� " << ptr5 << endl;
	cout << "ptr6�� int *���̸� ���� " << ptr6 << endl;
}
*/
//������

using namespace std;

int main(){
	int a = 3;
	int * ptr = &a; //ptr�� ������ a�� ����

	cout<< "a�� �ּҰ��� �����մϴ�.	" << ptr << endl;
	cout << "a�� ���� ���� �����մϴ�.	" << *ptr << endl;

	*ptr = 10;
	cout << "a�� ���� ���������� �����մϴ�. " << *ptr << endl;
	cout << "a�� �ּ� ���� �ٲ��� �ʽ��ϴ�.	" << ptr << endl;
	
	return 0;
}