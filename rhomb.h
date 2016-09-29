#ifndef RHOMB_H
#define RHOMB_H
#include <cstdlib>
#include <iostream>
#include "figure.h"
class rhomb : public figure {
public:
	rhomb();
	rhomb(std::istream &is);
	rhomb(size_t i, size_t j);
	rhomb(const rhomb& orig);

	double Square() override;
	void Print() override;

	virtual ~rhomb();
private:
	size_t side_d1;
	size_t side_d2;
};
#endif /* RHOMB_H */