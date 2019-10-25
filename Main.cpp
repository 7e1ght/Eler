#include <iostream>
#include "ClassicEler.h"
#include "ModifyEler.h"

using namespace std;

double f(double x, double y) {
	return x+pow(x, 2) + y;
}

int main() {
	bool isStop = true;
	double y, x, a, b, h;
	unsigned int n;

	while (isStop) {
		cout << "y " << "x " << "a " << "b " << "n" << endl;
		cin >> y >> x >> a >> b >> n;

		if (cin.fail()) {
			cout << "Input error." << endl << endl;
			cin.clear();
			cin.ignore(32767, '\n');
		} else {
			ClassicEler ce(f, x, y, n, (b-a)/n);
			ce.print();

			ModifyEler me(f, x, y, n, (b-a)/n);
			me.print();
		}
	}

	system("pause");
	return 0;
}