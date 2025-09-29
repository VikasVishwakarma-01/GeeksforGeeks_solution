//Back-end complete function Template for C++

class Solution {
  public:
    int solve(int i, vector<int>& dp,vector<int>& cost) {
        if(i >= cost.size()) return 0;
        if(dp[i] != -1) return dp[i];
        
        return dp[i] = cost[i] + min(solve(i+1, dp, cost), solve(i+2, dp, cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n == 1) return cost[0];
        vector<int> dp(n+1, -1);
        int one = solve(0, dp, cost);
        int two = solve(1, dp, cost);
        return min(one, two);
        
    }
};