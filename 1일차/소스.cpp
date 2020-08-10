#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>

using namespace std;

class Car {

private:
	int speed;
	int gear;
	string color;
	int* p;
	const int max_speed;


public:

	/*void Init(char* color);*/
	/*void Start();
	void Stop();*/

	Car(int s, int g, string c);

	Car():max_speed(200) {
		cout << "생성자호출" << endl;
		speed = 0;
		gear = 1;
		color = "white";
	}

	~Car() {
		cout << "소멸자 호출" << endl;
		delete p;
	}

	int getSpeed();
	void setSpeed(int s);
	int getGear();
	int setGear(int g);
	string getColor();
	string setColor(string s);

	void SpeedUp();
	void SpeedDown();
	void init(int s, int gear, string c);
	void show();

	

	

};


int main() {
	/*Car car;
	car.init("red");
	car.start();
	car.set_speed(60);
	car.stop(car);*/
	srand(time(NULL));
	srand(GetTickCount());

	Car car1(rand()%200,1,"white"), car2(rand()%200,1,"red");
	Car* a = new Car;
	
	car1.show();
	car2.show();

	if (car1.getSpeed() > car2.getSpeed()) {
		cout << "car1이 승리함" << endl;
	}
	else {
		cout << "car2가 승리함" << endl;
	}


	delete a;
	
}

Car::Car(int s, int g, string c):speed(s),gear(g),color(c),max_speed(200){}

int Car::getSpeed()
{
	return speed;
}

void Car::setSpeed(int s)
{
	speed = s;
}

int Car::getGear()
{
	return gear;
}

int Car::setGear(int g)
{
	gear = g;
	return 0;
}

string Car::getColor()
{
	return color;
}

string Car::setColor(string s)
{
	color = s;
	return 0;
}

void Car::init(int s, int g, string c)
{
	speed = s;
	gear = g;
	color = c;
}

void Car::show()
{
	cout << "==============" << endl;
	cout << "속도" << speed << endl;
	cout << "기어" << gear << endl;
	cout << "색상" << color << endl;
	cout << "==============" << endl;
}
