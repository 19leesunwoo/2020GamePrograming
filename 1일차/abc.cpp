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
	cout << "������C" << endl;
}

C::~C()
{
	cout << "�Ҹ���C" << endl;

}



A::A()
{
	cout << "������A" << endl;
}

A::~A()
{
	cout << "�Ҹ���A" << endl;
}

B::B()
{
	cout << "������B" << endl;
}

B::~B()
{
	cout << "�Ҹ��� B" << endl;
}

int main() {
	C c;
	return 0;
}
