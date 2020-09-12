//
// Savings
//

#include <iostream>
using namespace std;
#include "Savings.h"

// Create savings account in the heap - as a friend
Savings* newSavings(int nAccountNum) {
	Savings* pS = new Savings;
	pS->nAccountNumber = nAccountNum;
	pS->dBalance = 0.0;
	return pS;
}

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