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
		cout << "피자 조각수를 입력하시오 :" << endl;
		cin >> pizza_slice;
		cout << "사람 수를 입력하시오 :" << endl;
		cin >> person;
		slice_per_person = DividePizza(pizza_slice, person);
		cout << "한사람당 피자는 " << slice_per_person << " 조각 입니다" << endl;
	}
	catch (int e) {
		cout << "사람이" << e << "명 입니다" << endl;
	}
	
	
	return 0;
}