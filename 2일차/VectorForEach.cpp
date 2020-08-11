#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<double>vec(10);

	cout << "10개의 숫자를 입력하세요" << endl;

	for (double& elem : vec) {
		cin >> elem;
	}
	for (double elem : vec) {
		cout << elem << endl;
	}
}