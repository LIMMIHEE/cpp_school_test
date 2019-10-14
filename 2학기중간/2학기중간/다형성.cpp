#include<iostream>
using namespace std;


/*
class Ride {
public:
	void rideFunc() {
		cout << "Ÿ��" << endl;
	}
};
class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << " ������ Ÿ��" << endl;
	}
};
class Airride : public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
	}
};
int main() {
	Ride * r1 = new BusRide();
	r1->rideFunc();
	Ride * r2 = new Airride();
	r2->rideFunc();
}
*/
//179

/*
class Ride {
public:
	virtual void rideFunc() {
		cout << "Ÿ��" << endl;
	}
};
class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
};
class AirRide : public Ride {
public :
	int ton;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
	}
};
int main() {
	Ride * r1 = new BusRide();
	r1->rideFunc();
	Ride * r2 = new AirRide();
	r2->rideFunc();
	return 0;
}
*/
// 180

/*
class Ride {
public:
	virtual void rideFunc() {
		cout << "Ÿ��" << endl;
	}
	void rideFunc2() {
		cout << "����" << endl;
	}
};
class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
};
int main() {
	Ride* r1 = new BusRide();
	r1->rideFunc();
	BusRide *r2 = new BusRide();
	r2->rideFunc2();
	return 0;
}
*/
//181

/*
class Ride {
public:
	virtual void rideFunc() {
		cout << "Ÿ��" << endl;
	}
};
class BusRide :public Ride {
public :
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
};
class AirRide :public Ride {
	int ton;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
	}
};
int main() {
	BusRide br1;
	Ride &r1 = br1;
	r1.rideFunc();

	AirRide ar2;
	Ride &r2 = ar2;
	r2.rideFunc();
		return 0;
}
*/
//183
/*
class SuperClass {
private:
	char *str;
public:
	SuperClass(const char* str) {
		this->str = new char[strlen(str) + 1];
	}
	virtual ~SuperClass() {
		cout << "~SuperClass()" << endl;
		delete[] str;
	}
};
class SubClass :public SuperClass {
private:
	char * str;
public:
	SubClass(const char * str2,const char * str1):SuperClass(str2) {
		this->str = new char[strlen(str1) + 1];
	}
	~SubClass() {
		cout << "~Sub Class()" << endl;
		delete[]str;
	}
};
int main() {
	SuperClass* ptr = new SubClass("Superclass","SubClass");
	delete ptr;

	return 0;
}
*/
//184
/*
class Animal {
public:
	virtual ~Animal() {}
	virtual void SoundSpeak() = 0;
	virtual void EatSiets(const char* eat) const = 0;
};
class Dog : public Animal {
public:
	virtual void SoundSpeak() {
		cout << "���Ҹ��� �۸� ����" << endl;
	}
	virtual void EatSiets(const char* eat) const{
		cout << eat << endl;
}
};
class Cat :public Animal {
public:
	virtual void SoundSpeak() {
		cout << "��þ��̴� �ֿ��ä�" << endl;
	}
	virtual void EatSiets(const char* eat) const{
		cout << eat << endl;
	}
};
int main() {
	Dog dog;
	dog.SoundSpeak();
	dog.EatSiets("�� ��ȿ");

	Cat cat;
	cat.SoundSpeak();
	cat.EatSiets("����̻礭");
	return 0;

}
*/
//186
class SplUSB {
public:
	SplUSB() {}
	   virtual ~SplUSB() {}
	   virtual int GetSerial() = 0;
protected:
	int Serial_ID;
};
void GetPrint(SplUSB * ptr) {
	cout << "��ġ ���̵� : " << ptr->GetSerial() << endl;
}

class SplMouse :public SplUSB {
public: 
	SplMouse(int id) { Serial_ID = id; }
	 int GetSerial(){
		 cout << "Mouse Ŭ����";
		 return Serial_ID;
	}
};
class callPhone :public SplUSB {
public:
	callPhone(int id) { Serial_ID = id; }
	int GetSerial() {
		cout << "����Ʈ�� Ŭ����";
		return Serial_ID;
	}
};

int main() {
	SplMouse cm(1234);
	callPhone cp(5678);

	::GetPrint(&cm);
	GetPrint(&cp);
	return 0;
}