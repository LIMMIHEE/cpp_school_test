#include<iostream>
#include<fstream>
using namespace std;

/*
int  main() {
	ofstream fo_bin("data.bin", ofstream::binary);
	//fobin 는 출력 스트림객체이고, 매개변수를 2개 받는 생성자이다.
	//이진파일로 오픈한다.
	int nArray[] = { 100,200,300,400,500,600 };

	if (!fo_bin) {
		cout << "data.bin 파일 오픈 에러" << endl;
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
		cout << "data.bin 파일 오픈 에러" << endl;
		exit(1);
	}
	cout << "data.bin 파일 내용 출력" << endl << endl;
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
	//파일을 사용할 떄 오픈 해야한다.
	if (!fin) {주 입력 
		cout << file << " 열기 오류" << endl;
		return 0;
	}
	fin.seekg(0, ios::end);
	//fin은 sample.txt 파일을 가리키고 , 파일 포인터를 파일의 마지막으로 위치를 이동시켜라
	cout << file << "의 크기는  " << fin.tellg() << endl;

	fin.close();
	return 0;
}
*///236
//236

/*
int main() {
	int nData1, nData2;
	cout << "두개의 정수 입력 : ";
	cin >> nData1 >> nData2;

	cout << nData1 << "를 " << nData2 << "로 나눈 몫은 " << nData1 / nData2 << "입니다." << endl;
	cout << nData1 << "를 " << nData2 << "로 나눈 나머지는 " << nData1 % nData2 << "입니다." << endl;

	return 0;
}
*/
//241
/*
int main() {
	int nData1, nData2;
	cout << "두개의 정수 입력 : ";
	cin >> nData1 >> nData2;

	if (nData2 <= 0) {
		cout << "nData2 값으로 0보다 작은 값을 입력했습니다"
			<< endl;
	}
	else{
		cout << nData1 << "를 " << nData2 << "로 나눈 몫은 " << nData1 / nData2 << "입니다." << endl;
		cout << nData1 << "를 " << nData2 << "로 나눈 나머지는 " << nData1 % nData2 << "입니다." << endl;
	}
	return 0;
}*/
//242
/*
int main() {
	int nData1, nData2;
	cout << "두개의 정수 입력 : ";
	cin >> nData1 >> nData2;

	try {
		if (nData2 <= 0)  throw nData2;

		cout << nData1 << "를 " << nData2 << "로 나눈 몫은 " << nData1 / nData2 << "입니다." << endl;
		cout << nData1 << "를 " << nData2 << "로 나눈 나머지는 " << nData1 % nData2 << "입니다." << endl;
	}
	catch (int exception) {
		cout << "예외발생 , 나누는 수는 " << nData2 << " 가 될 수 없다." << endl;
	}
	return 0;
}
*/
//243
/*
void divideFunc(int d1, int d2) {
	if (d2 <= 0) throw d2;
	cout << d1 << "를 " << d2 << "로 나눈 몫은 " << d1 / d2 << "입니다." << endl;
	cout << d1 << "를 " << d2 << "로 나눈 나머지는 " << d1 % d2 << "입니다." << endl;
}
int main() {
	int nData1, nData2;

	cout << " 두 개의 정수를 입력하세요 : ";
	cin >> nData1 >> nData2;

	try {
		divideFunc(nData1, nData2);

	}
	catch (int excetion) {
		cout << "예외발생 , 나누는 수는 " << nData2 << " 가 될 수 없다." << endl;
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
			cout << i << "번쨰 배열 생성" << endl;

		}
	}
	catch (bad_alloc &e) {
	//더이상 메모리를 생성 할 수 없을 때 
	//catch 자동 실행.
		cout << "exception : " << e.what() << endl;
	}
}
*/
//248
int DecreaseNumber(int n) {
	if (n < 0) throw n;
	else if (n == 0)
		throw "0은 입력할 수 없습니다";
	return  --n;
}
void main() {
	int num;
	cout << "양의 정수를 하나 입력하세요  : ";
	while (cin >> num) {
		try {
			cout << "입력한 정수에서 1을 감소 시킨 값 : " << DecreaseNumber(num) << endl;
		}
		catch (int input) {
			cout << input << "은 양의 정수가 아닙니다 " << endl;
			cout << "양의 정수를 다시 입력하세요  : ";
			continue;
		}
		catch (const char * st) {
			cout << st << endl;
			cout << "양의 정수를 다시 입력하세요  : ";
			continue;
		}
		break;
	}
}