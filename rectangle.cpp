#include "rectangle.h"
#include <iostream>
#include <cmath>
using namespace std;


rectangle::rectangle() : rectangle(0, 0) {
}

rectangle::rectangle(size_t i, size_t j) : side_a(i), side_b(j) {
	cout << "rectangle created: " << side_a << ", " << side_b <<  endl;
}

rectangle::rectangle(istream &is) {
	is >> side_a;
	is >> side_b;
}

rectangle::rectangle(const rectangle& orig) {
	cout << "rectangle copy created" << endl;
	side_a = orig.side_a;
	side_b = orig.side_b;
}

double rectangle::Square() {
	return side_a * side_b;
}

void rectangle::Print() {
	cout << "a=" << side_a << ", b=" << side_b << endl;
}

rectangle::~rectangle() {
	cout << "rectangle deleted" << endl;
}
