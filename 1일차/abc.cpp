#include <iostream>

using namespace std;

class A
{
public:
	A();
	~A();

private:

};

class B : public A
{
public:
	B();
	~B();

private:

};

class C : public B
{
public:
	C();
	~C();

private:

};

C::C()
{
	cout << "持失切C" << endl;
}

C::~C()
{
	cout << "社瑚切C" << endl;

}



A::A()
{
	cout << "持失切A" << endl;
}

A::~A()
{
	cout << "社瑚切A" << endl;
}

B::B()
{
	cout << "持失切B" << endl;
}

B::~B()
{
	cout << "社瑚切 B" << endl;
}

int main() {
	C c;
	return 0;
}
