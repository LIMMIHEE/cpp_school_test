/*
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void main() {
	char empNum[20]; //���
	char empName[20];//�̸�
	char position[20];//����
	ofstream fout("info.txt");//�Ű����� 1���� ���� �����ڰ� ȣ��˴ϴ�.
	//ofstream fout; fout.open("info.txt")�� ����.
	// ofstream�� ��� ��Ʈ������ fout�� ���� ������� "info.txt"���� ����ϰڴ�.
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << " ���� ����� ����� �Է��Ͻÿ� =>";
		cin >> empNum;
		cout << " �̸��� �Է��Ͻÿ� =>";
		cin >> empName;
		cout << " ������ �Է��Ͻÿ� =>";
		cin >> position;
		fout << empNum << setw(10) << empName << setw(22) << position << endl; //���Ͽ��Է��� ������ ���
		cout << empNum << setw(10) << empName << setw(22) << position << endl;// ȭ�鿡 �Է��� ������ ���
		//empNUM << setw(10) ���� empNum�� 10�ڸ��� ����϶�.
	}
}

*/
//224
/*
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void main() {
	char empNum[20]; //���
	char empName[20];//�̸�
	char position[20];//����

	ifstream fin; //�Է� ���� ��Ʈ�� ��ü ����

	ofstream fout("info.txt"); //����
	//info.txt������ ����Ű�� fin�� ���� ���� ��쿡�� true
	//fin�� ������ ���� ����Ű�� ��� 
	
	while (fin >> empNum >> empName >> position) {
		cout << empNum << setw(10) << empName << setw(22) << position << endl;
	}
	fin.close();

	return 0;
}
*/
//225
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void main() {
	ofstream fout("sample.txt", ios::app);
	if (!fout) {
		cerr << "���� ���� ����" << endl;
		exit(1);
	}
	fout << "append Line 1" << endl;

}