#include "Car.h"

int Car::getSpeed()
{
	return speed;
}

void Car::setSpeed(int s)
{
	speed = s;
}

void Car::honk()
{
	cout << "�ȳ� ���̸��� �ڵ�����" << endl;
}

int main() {
	Car mycar;
	mycar.setSpeed(80);
	mycar.honk();
	cout << "����ӵ��� : " << mycar.getSpeed() << endl;

	return 0;
}
