#include <iostream>

void printForest(int n)
{
    // Outer loop for each row
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for printing '*' in each row
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        // Move to the next line after completing a row
        std::cout << std::endl;
    }
}

int main()
{
    int n;

    // Get user input for the number of rows
    std::cout << "Enter the number of rows for the forest: ";
    std::cin >> n;

    // Call the function to print the forest
    printForest(n);

    return 0;
}
