#include <iostream>
#include <vector>
#include <sstream>
#include "..\Library\Lambda.h"

int main() 
{
	auto lambda = Lambda(0);
	const auto answer = lambda(1);
	std::cout << answer << "\n";

	const auto f = [](const double y) {return y + 1; };
	std::cout << f(1) << "\n";

	auto print = [&](const int value) {std::cout << value; };
	print(123);

	auto to_string = [](const std::vector<int> list)
	{
		std::stringstream buffer;
		for(const auto element : list)
		{
			buffer << element << " ";
		}
		return buffer.str();
	};
	std::cout << to_string({0, 1, 2, 3});


	std::cout << "\niterator:\n";
	std::ostream_iterator<int> out_it(std::cout, ", ");
	auto v = { 1, 2, 3, 4, 5 };
	std::copy(v.begin(), v.end(), out_it);

	return 0;
}