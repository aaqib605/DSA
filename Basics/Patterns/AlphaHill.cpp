void alphaHill(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // spaces
        int spaces = n - i;
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // character
        char charToPrint = 'A';
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j < i)
            {
                cout << charToPrint << " ";
                charToPrint++;
            }
            else
            {
                cout << charToPrint << " ";
                charToPrint--;
            }
        }

        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}