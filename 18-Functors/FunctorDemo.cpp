#include<iostream>

class MyFloat {
	float _ft;

public:
	MyFloat() {
		_ft = 0.1;
	}

	void getFloat() {
		std::cout << _ft << std::endl;
	}

	void operator ()(float f) {	//Overwritten operator to add value in the variable
		_ft += f;
	}
};

int main() {
	MyFloat f;
	f.getFloat();

	f(1);
	f.getFloat();

	f(5);
	f.getFloat();

	return 0;
}
