#include<iostream>

using namespace std;

/*
int main() {
	int arr[4] = { 1,2,3,4 };
	int total=0;
	int avg=0;
	for (int i = 0; i < 4; i++) {
		total += arr[i];
	}
	cout << "총합 : "<<total;
	cout << "\n평균 : " << total / 4;
	
	return 0;
}
*/
//배열

/*
int main() {
	int arr[4] = { 1,2,3,4 };

	for (int i = 0; i < 4; i++) {
		cout << arr+i << " " << endl;
	}
	for (int i = 0; i < 4; i++) {
		cout << &arr[i] << " " << endl;
	}
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " " << endl;
	}
	

	return 0;
}
*/
//주소 연습 56P

/*
int main() {
	char str[15] = "HLLO WORLD";
	char str2[3] = { 'H','E' };
	cout << str[0] << " (" << (int) str[0] << ")" << endl;
	cout << str[4] << " (" << (int)str[0] << ")" << endl;
	cout << str[5] << " (" << (int)str[0] << ")" << endl;
	cout << str[10] << " (" << (int)str[0] << ")" << endl;
	cout << str[11] << " (" << (int)str[0] << ")" << endl;
	cout << str2[0] << " (" << (int)str[0] << ")" << endl;

	return 0;
}
*/
//문자열 

/*
int main() {
	char str[15] = "HELLO WORLD";
	int strlength = 0;

	for (int i = 0; str[i] != NULL; i++) {
		strlength++;
	}

	cout << " HELLO WOLRD의  길이는" << strlength << endl;



	return 0;
}
*/
// 문자열 길이

/*
int main() {
	int* ptr;
	int arr[4] = { 1, };
	ptr = arr;

	for (int i = 0; i < 4; i++) {
		cout << &arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << ptr+i << " ";
	}
	cout << endl;

	return 0;

}
*/
//포인터와 배열

/*
int main() {
	int* ptr;
	int arr[4] = { 1, };
	ptr = arr;

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout <<*(ptr + i) << " ";
	}
	cout << endl;


	for (int i = 0; i < 4; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;

	return 0;

}
*/
//포인터와 배열2