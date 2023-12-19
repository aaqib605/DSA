void symmetry(int n)
{
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        int starsToPrint = i;
        if (i > n)
            starsToPrint = (2 * n) - i;
        // stars
        for (int j = 1; j <= starsToPrint; j++)
        {
            cout << "* ";
        }

        // spaces
        int spacesToPrint = abs((2 * n) - (2 * i));
        for (int j = 1; j <= spacesToPrint; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= starsToPrint; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}