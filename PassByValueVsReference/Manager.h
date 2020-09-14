#pragma once
class Manager {
public:
	virtual double salaryMultiplier() {
		return 1.25;
	}
};
class TopManager : public Manager {
public:
	virtual double salaryMultiplier() { // virtual is optional in subclass, but good practice
		return 1.5;
	}
};

double someFn(Manager* pM);
void testLateBinding();