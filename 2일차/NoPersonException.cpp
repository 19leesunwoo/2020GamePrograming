#include "NoPersonException.h"
#include <iostream>
using namespace std;

int main() {
	int pizzaSlices = 12;
	int persons = 0;
	int slicePerPersons = 0;
	try {
		cout << "��� ���� �Է��ϼ���";
		cin >> persons;
		if (persons <= 0) {
			throw NoPersonException(persons);
		}
		slicePerPersons = pizzaSlices / persons;
		cout << "�� ����� ���ڴ�" << slicePerPersons << "�Դϴ�" << endl;
		
	}
	catch (NoPersonException e) {
		cout << "���� : �����" << e.getPersons() << "�� �Դϴ�." << endl;
	}
}
