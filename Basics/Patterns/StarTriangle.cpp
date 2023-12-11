#include <iostream>

void nStarTriangle(int n)
{
    // Loop for each row
    for (int i = 0; i < n; i++)
    {
        // Spaces before the stars
        for (int j = 0; j < n - i - 1; j++)
        {
            std::cout << " ";
        }

        // Stars in the triangle
        for (int k = 0; k < i * 2 + 1; k++)
        {
            std::cout << "*";
        }

        // Spaces after the stars
        for (int l = 0; l < n - i - 1; l++)
        {
            std::cout << " ";
        }

        // Move to the next line after completing a row
        std::cout << std::endl;
    }
}

int main()
{
    // Example usage
    nStarTriangle(5);
    return 0;
}
