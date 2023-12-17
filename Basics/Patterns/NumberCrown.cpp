void numberCrown(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        // spaces
        int spaces = 2 * (n - i);
        for (int k = 1; k <= spaces; k++)
        {
            cout << "";
        }

        // numbers
        for (int l = i; l >= 1; l--)
        {
            cout << l << " ";
        }

        cout << endl;
    }
}