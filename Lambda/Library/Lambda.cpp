#include "Lambda.h"

Lambda::Lambda(const double value) : x(value)
{
}

double Lambda::operator()(const double step)
{
	this->x += step;
	return this->x;
}
