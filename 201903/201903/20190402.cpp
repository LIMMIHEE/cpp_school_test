#include<iostream>

using namespace std;

/*
int sum(int a, int b, int c = 0, int d = 0) {
	return a + b + c + d;
}

int main() {

	//cout << "sum(10)= " << sum(10) << endl; �� ������ ����, b�� ���� ���޾�������
	cout << "sum(10,15)= " << sum(10, 15) << endl;
	cout << "sum(10,15,25)= " << sum(10, 15,25) << endl;
	cout << "sum(10,15,25,30)= " << sum(10, 15,25,30) << endl;

	return 0;
}

*/
//����Ʈ �Ű����� ����

/*
struct Point {
	int x;
	int y;
}point1; //����ü ��������

int main() {
	struct Point point2 = { 3,4 }; //c��Ÿ��
	Point point3 = { 1,2 };//C++��Ÿ��
	point1.x = 100;//����Ŀ ����
	point1.y = 300;
	point3.x = 123;
	point3.y = 354;
	
	cout << "�� point 1�� ��ǥ�� (" << point1.x << "," << point1.y << ")" << endl;
	cout << "�� point 2�� ��ǥ�� (" << point2.x << "," << point2.y << ")" << endl;
	cout << "�� point 1�� ��ǥ�� (" << point3.x << "," << point3.y << ")" << endl;
	return 0;
}
*/
//����ü ����

/*
struct Point {
	int x;
	int y;
};

int main() {
	Point point2 = { 3,4 }; 
	Point *Ppoint = &point2;
	

	cout << "Ppoint�� ����Ű�� ��ǥ�� (" << (*Ppoint).x << "," << (*Ppoint).y << ")" << endl;
	cout << "Ppoint�� ����Ű�� ��ǥ�� (" << Ppoint->x << "," << Ppoint->y << ")" << endl; //�̷��� �ڵ� ���°� �� �ٶ��� ( ����Ʈ�� ����Ʈ. )
	cout << "point2�� ����Ű�� ��ǥ�� (" << point2.x << "," << point2.y << ")" << endl;

		return 0;
}
*/
//����ü ���ٹ� ����

/*
struct Point {
	int x;//��� ����
	int y;

	void Print() { //��� �Լ�
		cout << "x ��ǥ�� " << x << endl;
		cout << "y ��ǥ�� " << y << endl;
	}
};

int main() {
	Point point = {1,2};
	point.Print(); //��� �Լ� ȣ���Ͽ�  X,Y ���� �����
	//Print()�Լ��� ����ü ���ο� �Լ��� ���� �Ǿ����� ��쿡
	//Print()�Լ��� ȣ���Ҷ����� �ζ��� ȭ�� �Ǿ �ڵ尡 �������. ( ���� )

	return 0;
}
*/
//����ü ����Լ� ȣ�� ����

/*
struct Point {
	int x;//��� ����
	int y;
	void Print();
};

int main() {
	Point point = { 1,2 };
	point.Print(); //��� �Լ� ȣ���Ͽ�  X,Y ���� �����

	return 0;
}

void Point::Print() { //�Լ� ���� 
	cout << "x ��ǥ�� " << x << endl;
	cout << "y ��ǥ�� " << y << endl;
}
*/
//����ü ��� �Լ� �ٱ� ȣ��
