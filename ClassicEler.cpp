#include "ClassicEler.h"
/*		Table
*		k x y
*/

using namespace std;

void ClassicEler::solve() {
	table = new double* [n];
	for (int i = 0; i < n; i++) table[i] = new double[3];

	table[0][0] = 0.f;
	table[0][1] = x;
	table[0][2] = y;

	for (int k = 1; k < n; k++) {
		table[k][0] = k;
		table[k][1] = table[k-1][1] + h;
		table[k][2] = table[k - 1][2] + func(table[k - 1][1], table[k - 1][2]) * h;
	}


}


void ClassicEler::print() {
	cout.precision(5);
	cout << endl << "Classic Eler" << endl;
	cout << "k\t" << "x\t" << "y\t" << endl;

	for (int i = 0; i < n; i++) {
		cout << table[i][0] << "\t" << table[i][1] << "\t" << table[i][2] << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++) delete[] table[i];
	delete[] table;
}

ClassicEler::ClassicEler(double f(double, double), double x, double y, double n, double h) 
	: x(x), y(y), n(n), h(h) {
	func = f;

	solve();
}


ClassicEler::~ClassicEler() {
}
