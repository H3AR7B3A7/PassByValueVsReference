//
// Student
//

#include <iostream>
using namespace std;
#include "Student.h"

Student* fn() {
	cout << "Entering fn()" << endl;

	// Create and init students
	cout << "Creating the student s: " << endl;
	Student student;

	cout << "Creating 5 more: " << endl;
	Student sArray[5];

	cout << "And one from the heap: " << endl;
	Student* pStudent = new Student;

	cout << "The students have a great time, but to everything comes an end..." << endl;
	cout << "Bummer they will have lived a short life." << endl;
	cout << "Returning from fn()" << endl;
	return pStudent;
}