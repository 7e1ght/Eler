#include "ModifyClassicEler.h"



void ModifyClassicEler::print() {

}

void ModifyClassicEler::solve() {

}

ModifyClassicEler::ModifyClassicEler(double f(double, double), double y, double x, double a, double b, double n) : ClassicEler(f, y, x, a, b, n) {
	L = new double* [n];

	for (int i = 0; i < n; i++) {
		L[i] = new double[2];
	}

}


ModifyClassicEler::~ModifyClassicEler()
{
}
