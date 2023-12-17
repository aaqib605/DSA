void alphaTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char charToPrint = 'A' + n - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << charToPrint << " ";
            charToPrint--;
        }
        cout << endl;
    }
}