class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        # initialize buy & sell pointers
        buy = 0 
        sell = 1

        MaxProf = 0

        while sell < len(prices): 
            #checking if the transaction is profitable ?
            if prices[buy] < prices[sell]:
                profit = prices[sell] - prices[buy]
                # update max profit using max(a, b)
                MaxProf = max(profit, MaxProf)
            # if not profitable we change it to sell pointer we found a low price
            else:
                buy = sell 
            # Regardless of the transaction we need to update the sell pointer
            sell = sell + 1
        
        return MaxProf
