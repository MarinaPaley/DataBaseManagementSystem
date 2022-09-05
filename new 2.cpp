#include <iostream>
#include <string>

/**
 * \brief Задание длины массива
 * \param message Сообщение пользователю
 * \return Заполненный массив
 */
size_t GetSize(const std::string message);

int* CreateVector(const size_t size);
/**
 * \brief Метод заполнения массива
 * \param size Размер массива
 * \return Заполненный массив
 */
void FillVector(const size_t size, int* vector);

int GetMax(const int* vector, const size_t size);

int main() 
{
    try
    {
        auto size = GetSize("Введите размер массива = ");
        int* myVector =CreateVector(size);
        FillVector(size, myVector);
        auto max = GetMax(myVector, size);
        std::cout << "Максимальный элемент = " << max << "\n";  
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    
    if (myVector != nullptr)
    {
        delete[] myVector;
        myVector = nullptr;
    }
    
    return 0;
}

size_t GetSize(const std::string message)
{
   std::cout << message;
   int value = 0;
   std::cin >> value;
   if (value <= 0)
       throw std::out_of_range("Выход за границы массива");
    return value;
}

int* CreateVector(const size_t size)
{
    return new int[size];
}

void FillVector(const size_t size, int* vector)
{
    for (size_t index = 0; index < size; index++)
        {
            std::cin >> vector[index];
        }
}

int GetMax(const int* vector, const size_t size)
{
    int max = vector[0];
    for (size_t index = 1; index < size; index++)
        {
            if (max < vector[index])
            {
                max = vector[index];
            }
        }
    return max;
}
