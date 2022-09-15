#include "Vectorr.h"
#include <sstream>
#include <exception>

Vector::Vector(int size)
{
    if (size < 0)
    {
        throw std::out_of_range("Размер должен быть больше 0!");
    }

    this->size = static_cast<size_t>(size);
    this->data = new int[this->size];
}

Vector::Vector(std::initializer_list<int> values) 
    : Vector(values.size())
{
    size_t index = 0;
    for (auto it = values.begin(); it != values.end(); it++)
    {
        this->data[index] = *it;
        index++;
    }
}

Vector::~Vector()
{
    if (this->data != nullptr)
    {
        delete[] this->data;
        this->data = nullptr;
    }
}

std::string Vector::ToString()
{
    std::stringstream buffer;
    for (size_t index = 0; index < this->size; index++)
    {
        buffer << this->data[index];
    }
    return buffer.str();
}
