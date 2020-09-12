#pragma once
class Savings {
protected:
	int nAccountNumber;
	double dBalance;

public:
	void init(int nAcountnum) {
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

Savings* newSavings(int nAccountNum);
void someFunction(Savings s);
void someFunction(Savings* pS);