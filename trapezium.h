#ifndef TRAPEZIUM_H
#define TRAPEZIUM_H
#include <cstdlib>
#include <iostream>
#include "figure.h"
class trapezium : public figure {
public:
	trapezium();
	trapezium(std::istream &is);
	trapezium(size_t i, size_t j, size_t k, size_t l);
	trapezium(const trapezium& orig);

	double Square() override;
	void Print() override;

	virtual ~trapezium();
private:
	size_t side_a;
	size_t side_b;
	size_t side_c;
	size_t side_d;
};
#endif /* TRAPEZIUM_H */