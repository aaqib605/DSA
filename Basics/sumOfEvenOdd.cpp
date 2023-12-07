#include <iostream>
using namespace std;

int main()
{
    // Input: a positive integer
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Initialize sum variables for even and odd digits
    int sumEvenDigits = 0;
    int sumOddDigits = 0;

    // Process each digit in the number
    while (n)
    {
        // Extract the last digit
        int lastDigit = n % 10;

        // Check if the digit is even or odd
        if (lastDigit % 2 == 0)
        {
            sumEvenDigits += lastDigit; // Add to the sum of even digits
        }
        else
        {
            sumOddDigits += lastDigit; // Add to the sum of odd digits
        }

        // Remove the last digit from the number
        n /= 10;
    }

    // Output the sum of even and odd digits
    cout << "Sum of even digits: " << sumEvenDigits << endl;
    cout << "Sum of odd digits: " << sumOddDigits << endl;

    return 0;
}
