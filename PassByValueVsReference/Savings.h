#pragma once
class Savings {
public:
	int nAccountNumber;
	double dBalance;

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