bool palindrome(int n)
{
    int originalNum = n;
    int ans = 0;

    while (n)
    {
        int lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n /= 10;
    }

    return (ans == originalNum);
}