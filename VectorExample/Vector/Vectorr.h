#pragma once

#include <iostream>
#include <string>

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
        Vector(int size);

        /**
        */
        ~Vector();

        /**
        */
        std::string& ToString();

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