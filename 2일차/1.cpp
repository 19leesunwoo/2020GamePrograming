#include <iostream>
using namespace std;

int DividePizza(int pizzaSlice, int person) {
	if (person == 0)
		throw person;
	return pizzaSlice / person;
}

int main() {
	int pizza_slice = 0;
	int person = -1;
	int slice_per_person = 0;
	try {
		cout << "���� �������� �Է��Ͻÿ� :" << endl;
		cin >> pizza_slice;
		cout << "��� ���� �Է��Ͻÿ� :" << endl;
		cin >> person;
		slice_per_person = DividePizza(pizza_slice, person);
		cout << "�ѻ���� ���ڴ� " << slice_per_person << " ���� �Դϴ�" << endl;
	}
	catch (int e) {
		cout << "�����" << e << "�� �Դϴ�" << endl;
	}
	
	
	return 0;
}