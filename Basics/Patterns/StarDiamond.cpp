#include <iostream>

void nStarDiamond(int n)
{
    // First half of the diamond
    for (int i = 1; i <= n; i++)
    {
        // Leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            std::cout << "*";
        }

        // Trailing spaces
        for (int l = 1; l <= n - i; l++)
        {
            std::cout << " ";
        }

        // Move to the next line
        std::cout << std::endl;
    }

    // Second half of the diamond
    for (int i = n - 1; i >= 1; i--)
    {
        // Leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            std::cout << "*";
        }

        // Trailing spaces
        for (int l = 1; l <= n - i; l++)
        {
            std::cout << " ";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}

int main()
{
    // Example usage
    nStarDiamond(5);

    return 0;
}
