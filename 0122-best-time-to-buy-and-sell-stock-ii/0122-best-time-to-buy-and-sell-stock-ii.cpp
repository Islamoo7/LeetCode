class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, price = prices[0];
        for(int i = 0; i<prices.size(); i++){
            if(prices[i]-price>0){
                profit += prices[i]-price;
                price = prices[i];
            }
            else{
                price = prices[i];
            }

        }
        return profit;
    }
};