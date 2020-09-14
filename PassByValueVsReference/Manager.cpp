//
// Manager
//

#include <iostream>
using namespace std;
#include "Manager.h"

double someFn(Manager* pW) {
	return pW->salaryMultiplier();
}

void testLateBinding() {
	Manager m;

	cout << "The value of salaryMultiplier() for manager: " << someFn(&m) << endl;

	TopManager tM;

	cout << "The value of salaryMultiplier() for top-manager: " << someFn(&tM) << endl;
}
