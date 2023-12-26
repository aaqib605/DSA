bool checkArmstrong(int n)
{
    int originalNum = n;
    int sumOfDigitsToPowerK = 0;

    // Count the number of digits in the number
    int numDigits = log10(n) + 1;

    while (n)
    {
        int lastDigit = n % 10;
        sumOfDigitsToPowerK += pow(lastDigit, numDigits);
        n /= 10;
    }

    return (originalNum == sumOfDigitsToPowerK);
}