#pragma once
class Savings {
	friend Savings* newSavings(int nAccountNum);	// Unconventional way to create objects - bad practice - not OOP
	// Friends can be used to set up relations between classes though...
protected:
	int nAccountNumber;
	double dBalance;

public:
	Savings() {		// Constructor: The 'right' way to set params on an object when created
		int n = 0;
		init(n++);
	}

	void init(int nAcountnum) {		// Another less conventional way to create objects
		// But can be used to reset values when passed to constructor
		nAccountNumber = nAcountnum;
		dBalance = 0.0;
	}

	double deposit(double dAmount) {
		if (dAmount < 0) {
			return 0.0;
		}
		dBalance += dAmount;
		return dBalance;
	}

	double withdraw(double dAmount) {
		if (dBalance < dAmount) {
			return 0.0;
		}
		dBalance -= dAmount;
		return dBalance;
	}

	double balance() {
		return dBalance;
	}
};

void someFunction(Savings s);
void someFunction(Savings* pS);