//
// Savings
//

#include <iostream>
using namespace std;
#include "Savings.h"

// Two functions to compare passing by value and reference
void someFunction(Savings s) {
	cout << "Depositing 100, passing by value: " << endl;
	s.deposit(100.0);
	cout << "Balance = " << s.balance() << endl;
}

void someFunction(Savings* pS) {
	cout << "Depositing 100, passing by reference: " << endl;
	pS->deposit(100.0);
	cout << "Balance = " << pS->balance() << endl;
}