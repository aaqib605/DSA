#include <iostream>

void printTriangle(int n)
{
    // Outer loop for the number of rows
    for (int i = 1; i <= n; i++)
    {

        // Inner loop for each row, printing the current row number
        for (int j = 1; j <= i; j++)
        {
            std::cout << i << " ";
        }

        // Move to the next line after printing each row
        std::cout << std::endl;
    }
}

int main()
{
    // Example: Print a triangle with 5 rows
    printTriangle(5);

    return 0;
}
