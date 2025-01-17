#include <iostream>

int** create_two_dim_array(int rows, int colums);
void fill_two_dim_array(int** matrix, int rows, int columns);
void print_two_dim_array(int** matrix, int rows, int columns);
void delete_two_dim_array(int** matrix, int rows, int columns);

int main()
{
    setlocale(LC_ALL, "rus");
    int rows{}, columns{};
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> columns;

    int** matrix{create_two_dim_array(rows, columns)};
    fill_two_dim_array(matrix, rows, columns);
    print_two_dim_array(matrix, rows, columns);
    delete_two_dim_array(matrix, rows, columns);

    return EXIT_SUCCESS;
}

int** create_two_dim_array(int rows, int columns)
{
    int** matrix{ new int* [rows] };
    for (int row{}; row < rows; ++row)
    {
        matrix[row] = new int[columns];
    }

    return matrix;
}

void fill_two_dim_array(int** matrix, int rows, int columns)
{
    for (int row{}; row < rows; ++row)
    {
        for (int column{}; column < columns; ++column)
        {
            matrix[row][column] = (row + 1) * (column + 1);
        }
    }
}

void print_two_dim_array(int** matrix, int rows, int columns)
{
    std::cout << "Таблица умножения :\n";
    for (int row{}; row < rows; ++row)
    {
        for (int column{}; column < columns; ++column)
        {
            std::cout << matrix[row][column] << ' ';
        }
        std::cout << '\n';
    }
}

void delete_two_dim_array(int** matrix, int rows, int columns)
{
    for (int row{}; row < rows; ++row)
    {
        delete[] matrix[row];
    }
    delete[] matrix;
}