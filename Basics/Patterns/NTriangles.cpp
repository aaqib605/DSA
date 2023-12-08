#include <iostream>

void printNumberTriangle(int n)
{
    // Outer loop for the number of rows
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for printing numbers in each row
        for (int j = 1; j <= i; j++)
        {
            // Print the current number and a space
            std::cout << j << " ";
        }
        // Move to the next line after completing a row
        std::cout << std::endl;
    }
}

int main()
{
    // Example: Printing a number triangle with 5 rows
    printNumberTriangle(5);

    return 0;
}
