void getNumberPattern(int n)
{
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            int topDistance = i - 1;
            int leftDistance = j - 1;
            int bottomDistance = ((2 * n) - 1) - i;
            int rightDistance = ((2 * n) - 1) - j;

            cout << n - min(min(topDistance, bottomDistance), min(leftDistance, rightDistance));
        }
        cout << endl;
    }
}