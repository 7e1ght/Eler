#pragma once
#include "ClassicEler.h"
class ModifyClassicEler :
	public ClassicEler {
private:
	double** L;
public:
	void print();
	void solve();

	ModifyClassicEler(double f(double, double), double y, double x, double a, double b, double n);
	~ModifyClassicEler();
};

