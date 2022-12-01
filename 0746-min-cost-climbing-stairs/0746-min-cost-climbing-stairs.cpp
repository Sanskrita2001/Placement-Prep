class Solution {
public:
    int recur(vector<int>&dp, vector<int>& cost,int i,int n){
        if(i>=n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int one = cost[i]+recur(dp,cost,i+1,n); 
        int two = cost[i]+recur(dp,cost,i+2,n);
        int res = min(one,two);
        return dp[i]=res;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();  
        vector<int> dp(n,-1);
        int zero = recur(dp,cost,0,n);
        int one = recur(dp,cost,1,n);
        
        return min(zero,one);    
    }
};