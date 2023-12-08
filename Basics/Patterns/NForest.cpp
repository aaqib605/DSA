#include <iostream>

void printSquarePattern(int n)
{
    // Outer loop for rows
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for columns
        for (int j = 1; j <= n; j++)
        {
            // Print '*' followed by a space
            std::cout << "* ";
        }
        // Move to the next line after printing each row
        std::cout << std::endl;
    }
}

int main()
{
    // Example: Printing a square pattern with side length 5
    printSquarePattern(5);

    return 0;
}
