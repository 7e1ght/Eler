#pragma once
#include <iostream>

class ClassicEler {
protected:
	double (*func)(double x, double y);
	double x, y, n, h, **table;
	virtual void solve();

public:
	virtual	void print();

	ClassicEler(double f(double, double), double x, double y, double n, double h);
	virtual ~ClassicEler();
};

