//
// PassByValueVsReference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Savings.h"
#include "Student.h"

int main(int nNumberOfArgs, char* pszArgs[]) {
	// Create savings account

	// Manual object creation
	// Savings s = { 0, 0.0 };
	
	// Initializer for (re)setting an object
	// s.init(0);  

	// Object creation with constructor (in stack)
	Savings s[5];

	// Try both functions
	someFunction(s[0]); // This won't work
	cout << "Balance in main() = " << s[0].balance() << endl;

	someFunction(&s[0]); // This will
	cout << "Balance in main() = " << s[0].balance() << endl; 

	// Check another object
	cout << "Balance in main() for 2nd object= " << s[1].balance() << endl;

	// Object creation with constructor (in heap)
	cout << "Allocating another savings-account from the heap:" << endl;
	Savings *pS = new Savings;

	// Testing Destructor
	Student *pStudent = fn();

	// Destructor not invoked for for objects allocated off of the heap
	// untill the pointer returned by fn() gets deleted:
	cout << "Deleting the pointer returned by fn(): " << endl;
	delete pStudent;
	pStudent = 0;
	


	// To evaluate results
	system("PAUSE");
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
