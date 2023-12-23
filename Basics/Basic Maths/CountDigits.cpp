int countDigits(int n)
{
    int evenlyDivideCount = 0;
    int num = n;

    while (n)
    {
        int lastDigit = n % 10;
        if (lastDigit && (num % lastDigit == 0))
            evenlyDivideCount++;

        n /= 10;
    }

    return evenlyDivideCount;
}