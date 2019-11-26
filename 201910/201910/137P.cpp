#include<iostream>
using namespace std;

class Cat {
private:
	int age;
	const char* name;
public:
	Cat() {
		age = 18;
		name = "¾ß¿ËÀÌ";
	}
	~Cat() {}
	int getAge() { return age;}
	void setAge(int age) { this->age = age; }
	char * getName() { return (char*)name; }
};