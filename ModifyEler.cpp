#include "ModifyEler.h"

/*	Table
*	0 1	2 3	 4
*	k x y L1 L2
*/

using namespace std;

void ModifyEler::print() {
	cout.precision(4);
	cout << endl << "Modify Eler" << endl;
	cout << "k\t\t" << "x\t\t" << "y\t\t" << "L1\t\t" << "L2" << endl;

	for (int k = 0; k < n; k++) {
		cout << table[k][0] << "\t\t" << table[k][1] << "\t\t" << table[k][2] << "\t\t" << table[k][3] << "\t\t" << table[k][4] << endl;
	}

	cout << endl;
	for (int i = 0; i < n; i++) delete[] table[i];
	delete[] table;
}

void ModifyEler::solve() {
	table = new double* [n];
	for (int i = 0; i < n; i++) table[i] = new double[5];

	table[0][0] = 0;
	table[0][1] = x;
	table[0][2] = y;
	table[0][3] = func(table[0][1], table[0][2]);
	table[0][4] = func(table[0][1] + h / 2, table[0][2] + table[0][3] * h / 2);

	for (int k = 1; k < n; k++) {
		table[k][0] = k;
		table[k][1] = table[k-1][1] + h;
		table[k][2] = table[k - 1][2] + table[k - 1][4] * h;
		table[k][3] = func(table[k][1], table[k][2]);
		table[k][4] = func(table[k][1] + h / 2, table[k][2] + table[k][3] * h / 2);
	}



}

ModifyEler::ModifyEler(double f(double, double), double x, double y, double n, double h) 
	: ClassicEler(f, x, y, n, h) {
	solve();
}


ModifyEler::~ModifyEler() {
}
