#include <iostream>
#include "..\Vector\Vectorr.h"

int main()
{
    dbms::Vector v{ 0, 1, 2 };
    std::cout << v.ToString();

    return 0;
}