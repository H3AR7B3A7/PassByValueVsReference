#pragma once
class Worker {
public:
	double salaryMultiplier() {
		return 1.0;
	}
};
class IctWorker : public Worker {
public:
	double salaryMultiplier() {
		return 1.12;
	}
};

double someFn(Worker* pW);
void testEarlyBinding();