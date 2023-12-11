#include <iostream>
using namespace std;

void nStarTriangle(int n)
{
    // Outer loop for the rows
    for (int i = n; i >= 1; i--)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }

        // Print trailing spaces
        for (int l = 1; l <= n - i; l++)
        {
            cout << " ";
        }

        // Move to the next line after completing a row
        cout << endl;
    }
}

int main()
{
    // Example usage: nStarTriangle(5);
    return 0;
}
