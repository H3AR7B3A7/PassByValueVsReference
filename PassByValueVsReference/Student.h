#pragma once
class Student {
protected:
	double* pdGrades;
	int* pnHours;

public:
	Student() {
		cout << "Constructing a student..." << endl;
		pdGrades = new double[128];
		pnHours = new int[128];
	}
	~Student() {
		cout << "Destructing a student, RIP..." << endl;
		delete[] pdGrades;
		pdGrades = 0;

		delete[] pnHours;
		pnHours = 0;
	}
};

Student* fn();