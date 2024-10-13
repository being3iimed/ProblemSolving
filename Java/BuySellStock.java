gitclass Solution {
    public int maxProfit(int[] prices) {
      int buy = 0, sell = 1, profit = 0, MaxProf = 0;
      while(sell < prices.length){
          if(prices[buy] > prices[sell]){
              buy = sell;
          }
          else if(prices[buy] < prices[sell]){
              profit = (prices[sell] - prices[buy]);
              MaxProf = Math.max(MaxProf, profit);
          }
          sell++;
      }   
      return MaxProf;
    }
}
