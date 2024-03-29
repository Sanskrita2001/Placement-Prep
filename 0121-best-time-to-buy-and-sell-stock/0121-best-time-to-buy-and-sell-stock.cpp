class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX,profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini)
                mini=prices[i];
            else if(profit<prices[i]-mini)
                profit=prices[i]-mini;
        }
        return profit;
    }
};