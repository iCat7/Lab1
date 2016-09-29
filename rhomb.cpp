#include "rhomb.h"
#include <iostream>
#include <cmath>
using namespace std;


rhomb::rhomb() : rhomb(0, 0) {
}

rhomb::rhomb(size_t i, size_t j) : side_d1(i), side_d2(j) {
	cout << "rhomb created: " << side_d1 << ", " << side_d2 << endl;
}

rhomb::rhomb(istream &is) {
	is >> side_d1;
	is >> side_d2;
}

rhomb::rhomb(const rhomb& orig) {
	cout << "rhomb copy created" << endl;
	side_d1 = orig.side_d1;
	side_d2 = orig.side_d2;
}

double rhomb::Square() {
	return (side_d1 * side_d2) / 2;
}

void rhomb::Print() {
	cout << "d1=" << side_d1 << ", d2=" << side_d2 << endl;
}

rhomb::~rhomb() {
	cout << "rhomb deleted" << endl;
}
