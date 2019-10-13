#include<iostream>
using namespace std;


/*
class Ride {
public:
	void rideFunc() {
		cout << "타다" << endl;
	}
};
class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << " 버스를 타다" << endl;
	}
};
class Airride : public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
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
		cout << "타다" << endl;
	}
};
class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};
class AirRide : public Ride {
public :
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
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

class Ride {
public:
	virtual void rideFunc() {
		cout << "타다" << endl;
	}
	void rideFunc2() {
		cout << "날다" << endl;
	}
};
class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};
int main() {
	Ride* r1 = new BusRide();
	r1->rideFunc();
	BusRide *r2 = new BusRide();
	r2->rideFunc2();
	return 0;
}