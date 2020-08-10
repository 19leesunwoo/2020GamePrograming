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
	cout << "안녕 내이름은 자동차야" << endl;
}

int main() {
	Car mycar;
	mycar.setSpeed(80);
	mycar.honk();
	cout << "현재속도는 : " << mycar.getSpeed() << endl;

	return 0;
}
