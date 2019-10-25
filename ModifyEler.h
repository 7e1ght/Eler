#pragma once
#include "ClassicEler.h"
class ModifyEler :
	public ClassicEler {

private:
	void solve() override;
public:
	void print() override;

	ModifyEler(double f(double, double), double x, double y, double n, double h);
	~ModifyEler() override;
};

