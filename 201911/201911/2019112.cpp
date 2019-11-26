/*
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void main() {
	char empNum[20]; //사번
	char empName[20];//이름
	char position[20];//직급
	ofstream fout("info.txt");//매개변수 1개가 갖는 생성자가 호출됩니다.
	//ofstream fout; fout.open("info.txt")와 같다.
	// ofstream은 출력 스트림으로 fout는 파일 출력으로 "info.txt"에서 출력하겠다.
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << " 번쨰 사람의 사번을 입력하시오 =>";
		cin >> empNum;
		cout << " 이름을 입력하시오 =>";
		cin >> empName;
		cout << " 직급을 입력하시오 =>";
		cin >> position;
		fout << empNum << setw(10) << empName << setw(22) << position << endl; //파일에입력한 내용을 출력
		cout << empNum << setw(10) << empName << setw(22) << position << endl;// 화면에 입력한 내용을 출력
		//empNUM << setw(10) 에서 empNum을 10자리로 출력하라.
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
	char empNum[20]; //사번
	char empName[20];//이름
	char position[20];//직급

	ifstream fin; //입력 파일 스트임 객체 생성

	ofstream fout("info.txt"); //파일
	//info.txt파일을 가르키는 fin은 값이 있을 경우에는 true
	//fin이 파일의 끝을 가르키는 경우 
	
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
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	fout << "append Line 1" << endl;

}