#include <iostream>
using namespace std;

// Function to print a number triangle
void printNumberTriangle(int n)
{
    // Outer loop for the number of rows
    for (int i = n; i >= 1; i--)
    {
        // Inner loop for each row, printing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j << " "; // Print the current number followed by a space
        }
        cout << endl; // Move to the next line after completing a row
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;

    // Check if the input is valid (positive)
    if (n > 0)
    {
        printNumberTriangle(n); // Call the function to print the triangle
    }
    else
    {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }

    return 0;
}
