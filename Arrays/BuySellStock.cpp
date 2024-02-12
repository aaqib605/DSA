int bestTimeToBuyAndSellStock(vector<int> &prices)
{
    int n = prices.size();

    int lowestPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        int currentPrice = prices[i];

        if (currentPrice < lowestPrice)
        {
            lowestPrice = currentPrice;
        }
        else if (currentPrice - lowestPrice > maxProfit)
        {
            maxProfit = currentPrice - lowestPrice;
        }
    }

    return maxProfit;
}
