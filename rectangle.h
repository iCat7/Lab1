#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <cstdlib>
#include <iostream>
#include "figure.h"
class rectangle : public figure {
public:
	rectangle();
	rectangle(std::istream &is);
	rectangle(size_t i, size_t j);
	rectangle(const rectangle& orig);

	double Square() override;
	void Print() override;

	virtual ~rectangle();
private:
	size_t side_a;
	size_t side_b;
};
#endif /* RECTANGLE_H */