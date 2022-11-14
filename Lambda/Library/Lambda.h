#pragma once
class Lambda
{
private:
	double x;

public:
	Lambda(const double value);
	double operator()(const double step);
};
