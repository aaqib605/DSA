void symmetry(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }

        // spaces
        int spaces = 2 * (i - 1);
        for (int j = 1; j <= spaces; j++)
        {
            cout << "";
        }

        // stars
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++)
        {
            cout << "";
        }

        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
