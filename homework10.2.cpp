#include <iostream>

double* create_array(int size)
{
    return new double[size]();
}

int main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "Введите размер массива: ";
    int sizeArray{};
    std::cin >> sizeArray;
    double* arr{ create_array(sizeArray) };

    std::cout << "Массив: ";
    for (int index{}; index < sizeArray; ++index)
    {
        std::cout << arr[index] << ' ';
    }

    delete[] arr;
    return EXIT_SUCCESS;
}