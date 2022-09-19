#include "Vectorr.h"
#include <sstream>
#include <exception>

using namespace dbms;

Vector::Vector(const int size)
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

size_t dbms::Vector::GetSize() const noexcept
{
    return this->size;
}

std::string Vector::ToString()
{
    std::stringstream buffer;
    buffer << "{ ";
    for (size_t index = 0; index < this->size; index++)
    {
        buffer << this->data[index] << ' ';
    }
    buffer << " }";
    return buffer.str();
}

const int& dbms::Vector::operator[](std::size_t idx)
{
    if (idx > this->GetSize())
    {
        throw std::out_of_range("Индекс превосходит размер массива.");
    }
    return this->data[idx];
}

std::wstring dbms::ToString(dbms::Vector& vector)
{
    std::wstringstream buffer;
    buffer << L'{ ';
    for (size_t i = 0; i < vector.GetSize(); i++)
    {
        buffer << vector[i] << L' ';
    }
    buffer << L'}';
    return std::wstring();
}
