//
// Worker
//

#include <iostream>
using namespace std;
#include "Worker.h"

double someFn(Worker* pW) {
	return pW->salaryMultiplier();
}

void testEarlyBinding() {
	Worker w;

	cout << "The value of salaryMultiplier() for worker: " << someFn(&w) << endl;

	IctWorker ictW;

	cout << "The value of salaryMultiplier() for ict-worker: " << someFn(&ictW) << endl;
}