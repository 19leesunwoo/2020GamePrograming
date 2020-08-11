#include<vector>
#include <iostream>

using namespace std;

int main() {
	double sum = 0.0;
	const int NUMBER_OF_ENTRIES = 5;
	vector<double>numbers(NUMBER_OF_ENTRIES);

	for (int i = 0; i < NUMBER_OF_ENTRIES; i++) {
		cin >> numbers[i];
		sum += numbers[i];
	}
	cout << "ЦђБе"<<endl;
	for (int i = 0; i < NUMBER_OF_ENTRIES - 1; i++) {
		cout << numbers[i]<<endl;
	}
	cout << numbers[NUMBER_OF_ENTRIES - 1];
	cout << sum / NUMBER_OF_ENTRIES;

	return 0;
}