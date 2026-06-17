class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int sale; int minp=100;

        for(int i = 0; i < prices.size(); i++){
            sale = prices[i];
            minp = min(minp, prices[i]);
            profit = max(profit, sale - minp);
        }

        return profit;

    }
};
