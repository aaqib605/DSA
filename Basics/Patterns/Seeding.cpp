#include <iostream>

void seeding(int n)
{
    // Outer loop for each row
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for each column in the current row
        for (int j = n; j >= i; j--)
        {
            // Print asterisks for each column
            std::cout << "* ";
        }
        // Move to the next line after finishing a row
        std::cout << std::endl;
    }
}

int main()
{
    // Example usage
    seeding(5);
    return 0;
}
