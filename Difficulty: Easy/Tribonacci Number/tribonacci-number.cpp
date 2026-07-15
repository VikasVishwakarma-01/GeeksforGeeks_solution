
class Solution {
  public:
    vector<int> dp;
    int solve(int n) {
        if(n <= 1) return n;
        if(n == 2) return 1;
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = solve(n-1) + solve(n-2) + solve(n-3);
    }
    int nthTribonacci(int n) {
        // code here
        if(n <= 1) return n;
        if(n == 2) return 1;
        dp.resize(n+1, -1);
        solve(n);
        return dp[n];
    }
};