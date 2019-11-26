#include<iostream>
#include<fstream>
using namespace std;

/*
int  main() {
	ofstream fo_bin("data.bin", ofstream::binary);
	//fobin �� ��� ��Ʈ����ü�̰�, �Ű������� 2�� �޴� �������̴�.
	//�������Ϸ� �����Ѵ�.
	int nArray[] = { 100,200,300,400,500,600 };

	if (!fo_bin) {
		cout << "data.bin ���� ���� ����" << endl;
		exit(1);
	}
	fo_bin.write((char *)&nArray, sizeof(nArray));
	return 0;
}*/
//233
/*
int  main() {
	int nArray[] = { 0 };

	ofstream fi_bin("data.bin", ofstream::binary);

	if (!fi_bin) {
		cout << "data.bin ���� ���� ����" << endl;
		exit(1);
	}
	cout << "data.bin ���� ���� ���" << endl << endl;
	fi_bin.read((char *)&nArray, sizeof(nArray));
	for (auto& e : nArray) {
		cout << "e " << "  ";
	}
	return 0;
}
*/
//234
/*
int main() {
	const char* file = "smaple.txt";

	ifstream fin(file);
	//������ ����� �� ���� �ؾ��Ѵ�.
	if (!fin) {�� �Է� 
		cout << file << " ���� ����" << endl;
		return 0;
	}
	fin.seekg(0, ios::end);
	//fin�� sample.txt ������ ����Ű�� , ���� �����͸� ������ ���������� ��ġ�� �̵����Ѷ�
	cout << file << "�� ũ���  " << fin.tellg() << endl;

	fin.close();
	return 0;
}
*///236
//236

/*
int main() {
	int nData1, nData2;
	cout << "�ΰ��� ���� �Է� : ";
	cin >> nData1 >> nData2;

	cout << nData1 << "�� " << nData2 << "�� ���� ���� " << nData1 / nData2 << "�Դϴ�." << endl;
	cout << nData1 << "�� " << nData2 << "�� ���� �������� " << nData1 % nData2 << "�Դϴ�." << endl;

	return 0;
}
*/
//241
/*
int main() {
	int nData1, nData2;
	cout << "�ΰ��� ���� �Է� : ";
	cin >> nData1 >> nData2;

	if (nData2 <= 0) {
		cout << "nData2 ������ 0���� ���� ���� �Է��߽��ϴ�"
			<< endl;
	}
	else{
		cout << nData1 << "�� " << nData2 << "�� ���� ���� " << nData1 / nData2 << "�Դϴ�." << endl;
		cout << nData1 << "�� " << nData2 << "�� ���� �������� " << nData1 % nData2 << "�Դϴ�." << endl;
	}
	return 0;
}*/
//242
/*
int main() {
	int nData1, nData2;
	cout << "�ΰ��� ���� �Է� : ";
	cin >> nData1 >> nData2;

	try {
		if (nData2 <= 0)  throw nData2;

		cout << nData1 << "�� " << nData2 << "�� ���� ���� " << nData1 / nData2 << "�Դϴ�." << endl;
		cout << nData1 << "�� " << nData2 << "�� ���� �������� " << nData1 % nData2 << "�Դϴ�." << endl;
	}
	catch (int exception) {
		cout << "���ܹ߻� , ������ ���� " << nData2 << " �� �� �� ����." << endl;
	}
	return 0;
}
*/
//243
/*
void divideFunc(int d1, int d2) {
	if (d2 <= 0) throw d2;
	cout << d1 << "�� " << d2 << "�� ���� ���� " << d1 / d2 << "�Դϴ�." << endl;
	cout << d1 << "�� " << d2 << "�� ���� �������� " << d1 % d2 << "�Դϴ�." << endl;
}
int main() {
	int nData1, nData2;

	cout << " �� ���� ������ �Է��ϼ��� : ";
	cin >> nData1 >> nData2;

	try {
		divideFunc(nData1, nData2);

	}
	catch (int excetion) {
		cout << "���ܹ߻� , ������ ���� " << nData2 << " �� �� �� ����." << endl;
	}
	return 0;
}*/
//246

/*
int main() {
	int *p[101];
	try {
		for (int i = 0; i < 100; i++) {
			p[i] = new int[10000000];
			cout << i << "���� �迭 ����" << endl;

		}
	}
	catch (bad_alloc &e) {
	//���̻� �޸𸮸� ���� �� �� ���� �� 
	//catch �ڵ� ����.
		cout << "exception : " << e.what() << endl;
	}
}
*/
//248
int DecreaseNumber(int n) {
	if (n < 0) throw n;
	else if (n == 0)
		throw "0�� �Է��� �� �����ϴ�";
	return  --n;
}
void main() {
	int num;
	cout << "���� ������ �ϳ� �Է��ϼ���  : ";
	while (cin >> num) {
		try {
			cout << "�Է��� �������� 1�� ���� ��Ų �� : " << DecreaseNumber(num) << endl;
		}
		catch (int input) {
			cout << input << "�� ���� ������ �ƴմϴ� " << endl;
			cout << "���� ������ �ٽ� �Է��ϼ���  : ";
			continue;
		}
		catch (const char * st) {
			cout << st << endl;
			cout << "���� ������ �ٽ� �Է��ϼ���  : ";
			continue;
		}
		break;
	}
}