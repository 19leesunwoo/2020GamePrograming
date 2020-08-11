#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

bool getStu(ifstream& stuFile, int& stuID, int& exam1, int& exam2, int& finalExam) {
	stuFile >> stuID >> exam1 >> exam2 >> finalExam;
	if (!stuFile) {
		return false;
	}
	else
	{
		return true;
	}
}

void calcGrade(int exam1, int exam2, int finalExam, int &avrg, char&grade) {
	avrg = (exam1 + exam2 + finalExam) / 3;
	if (avrg >= 90) {
		grade = 'A';
	}
	else if (avrg >= 80) {
		grade = 'B';
	}
	else if (avrg >= 70) {
		grade = 'C';
	}
	else if (avrg >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
}

void writeSu(ofstream& gradesFile, int stuID, int avg, char grade) {
	gradesFile.fill('O');
	gradesFile << setw(4) << stuID;
	gradesFile.fill(' ');
	gradesFile << setw(3) << avg;
	gradesFile << ' ' << grade << endl;
}


int main() {
	ifstream stuFile;
	cout << "���α׷� ����" << endl;
	stuFile.open("ch7STUFL.DAT");
	if (!stuFile) {
		cerr << "���� ���� ����" << endl;
		exit(100);
	}


	ofstream gradesFile;
	gradesFile.open("ch7STUGR.DAT");
	if (!gradesFile) {
		cerr << "���� ���� ����" << endl;
		exit(102);
	}

	int stuId, exam1, exam2, finalExam, avg;
	char grade;

	while (getStu(stuFile, stuId, exam1, exam2, finalExam)) {
		calcGrade(exam1, exam2, finalExam, avg, grade);
		writeSu(gradesFile, stuId, avg, grade);
	}

	stuFile.close();
	gradesFile.close();
	cout << "���α׷� ����" << endl;

	return 0;

}