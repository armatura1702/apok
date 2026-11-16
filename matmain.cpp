#include <iostream>
#include <cstdlib>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int** matrix = new int*[n];

    for (int r = 0; r < n; r++)
    {
        matrix[r] = new int[m];
    }

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            matrix[r][c] = std::rand() % 10;
        }
    }

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            std::cout << matrix[r][c] << "\t";
        }
        std::cout << "\n";
    }

    for (int r = 0; r < n; r++)
    {
        delete[] matrix[r];
    }
    delete[] matrix;

    return 0;
}
