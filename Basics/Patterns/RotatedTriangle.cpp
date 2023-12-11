#include <iostream>

void printStarLine(int numStars)
{
    for (int i = 1; i <= numStars; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}

void nStarTriangle(int n)
{
    // Outer loop for each row
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        // Determine the number of stars in each row
        int stars = i <= n ? i : 2 * n - i;

        // Print the stars for the current row
        printStarLine(stars);
    }
}

int main()
{
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Ensure n is positive
    if (n > 0)
    {
        nStarTriangle(n);
    }
    else
    {
        std::cout << "Please enter a positive integer for n." << std::endl;
    }

    return 0;
}
