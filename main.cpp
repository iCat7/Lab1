// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include <cstdlib>
#include "rectangle.h"
#include "trapezium.h"
#include "rhomb.h"
using namespace std;

int main(/*int argc, char** argv*/){
	int input;
	cout << "1. rectangle\n";
	cout << "2. trapezium\n";
	cout << "3. rhomb\n";
	cin >> input;
	if (1 == input) {
		figure *rec = new rectangle(cin);
		rec->Print();
		cout << rec->Square() << endl;
		delete rec;
	} else if (2 == input) {
		figure *tr = new trapezium(cin);
		tr->Print();
		cout << tr->Square() << endl;
		delete tr;
	} else if (3 == input) {
		figure *rh = new rhomb(cin);
		rh->Print();
		cout << rh->Square() << endl;
		delete rh;
	}
	else {
		cout << "Error, bad input\n";
	}
	system("pause");
	return 0;
}

