#include<iostream>

using namespace std;

/*
class Point {
public: // x,y,print() �� ���� public�� �ȴ�
	int x;
	int y;
	void Print(); // �Լ� ����
};

int main() {
	
	Point point = { 1,2 };
	point.Print();

	return 0;
}

void Point::Print()
{
	cout << "x��ǥ�� " << x << endl;
	cout << "y��ǥ�� " << y << endl;
}
*/
//Ŭ���� ���� 1


class Point {
	//private : ���� �����ϴ�. ( ��, ����Ʈ�� private )
	int x;
	int y;
	void Print() {
		cout << "x��ǥ�� " << x << endl;
		cout << "y��ǥ�� " << y << endl;
	}
};

int main() {

	//Point point = { 1,2 };  // ����� private
	//point.Print(); // �Լ��� private
	//print �Լ��� �θ������� �ڵ忡 �ζ���ȭ�� �ȴ�
	return 0;
}


//Ŭ���� ���� 2
