#include "trapezium.h"
#include <iostream>
#include <cmath>
using namespace std;


trapezium::trapezium() : trapezium(0, 0, 0, 0) {
}

trapezium::trapezium(size_t i, size_t j, size_t k, size_t l) : side_a(i), side_b(j), side_c(k), side_d(l) {
	out << "trapezium created: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << endl;
}

trapezium::trapezium(istream &is) {
	is >> side_a;
	is >> side_b;
	is >> side_c;
	is >> side_d;
}

trapezium::trapezium(const trapezium& orig) {
	cout << "trapezium copy created" << endl;
	side_a = orig.side_a;
	side_b = orig.side_b;
	side_c = orig.side_c;
	side_d = orig.side_d;
}

double trapezium::Square() {
	return (side_a + side_b) / 2.0 * sqrt((side_c * side_c) - (((side_b - side_a) * (side_b - side_a) + (side_c) * (side_c) - (side_d) * (side_d)) / (2.0 * (side_b - side_a))) * (((side_b - side_a) * (side_b - side_a) + (side_c) * (side_c)-(side_d) * (side_d)) / (2.0 * (side_b - side_a))));
}

void trapezium::Print() {
	cout << "a=" << side_a << ", b=" << side_b << ", c=" << side_c << ", d=" << side_d << endl;
}

trapezium::~trapezium() {
	cout << "trapezium deleted" << endl;
}