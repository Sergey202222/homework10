#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int sizeArray{};
    std::cout << "Введите размер массива: ";
    std::cin >> sizeArray;
    int* arr{ new int[sizeArray]() };

    for (int index{}; index < sizeArray; ++index)
    {
        std::cout << "arr[" << index << "] = ";
        std::cin >> arr[index];
    }

    std::cout << "Введённый массив: ";
    for (int index{}; index < sizeArray; ++index)
    {
        std::cout << arr[index] << ' ';
    }

    delete[] arr;
    return EXIT_SUCCESS;
}