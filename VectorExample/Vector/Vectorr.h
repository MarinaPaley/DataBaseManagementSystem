#pragma once

#include <iostream>
#include <string>

namespace dbms
{
    class Vector;

    std::wstring ToString(Vector& vector);

    /**
    * \brief Класс Вектор (список)
    */
    class Vector
    {
    private:

        /**
        * \brief Размер массива.
        */
        size_t size;

        /**
        * \brief Данные.
        */
        int* data;

        /**
        * \brief Копирующий конструктор.
        */
        Vector(const Vector& other) = delete;

        /**
        * \brief Перемещающий конструктор.
        */
        Vector(Vector&& other) = delete;

        /**
        * \brief Оператор копирования.
        */
        Vector& operator =(const Vector& other) = delete;

        /**
        * \brief Оператор перемещения.
        */
        Vector& operator =(Vector&& other) = delete;

    public:
        /**
        */
        Vector(const int size);

        /**
        */
        Vector(std::initializer_list<int> values);

        /**
        */
        ~Vector();

        size_t GetSize() const noexcept;

        /**
        */
        std::string ToString();


        const int& operator[](std::size_t idx);

        /**
        */
        void FillVector(std::istream& in = std::cin);

        /**
        */
        void FillRandomVector();

        /**
        */
        int GetMin();

        /**
        */
        int GetMax();

        /**
        */
        void Sort();

    };
}