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

        static int constexpr MAX_SIZE = 10000;

        /**
        * \brief Оператор перемещения.
        */
        Vector& operator =(Vector&& other) = delete;

    public:
        /**
        */
        explicit Vector(const int size);

        /**
        */
        Vector(std::initializer_list<int> values);

        /**
        * \brief Копирующий конструктор.
        */
        Vector(const Vector& other);

        /**
        * \brief Перемещающий конструктор.
        */
        Vector(Vector&& other);

        /**
* \brief Оператор копирования.
*/
        Vector& operator =(const Vector& other);

        /**
        */
        ~Vector();

        size_t GetSize() const noexcept;

        /**
        */
        std::string ToString() const noexcept;


        const int& operator[](std::size_t idx);

        /**
        */
        void FillVector(std::istream& in = std::cin);

        /**
        */
        void FillRandomVector();

        /**
        */
        int GetMin() const noexcept;

        /**
        */
        int GetMax() const noexcept;

        /**
        */
        void Sort() noexcept;

    };
}