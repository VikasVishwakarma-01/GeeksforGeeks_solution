// User function Template for C++
class Solution {
  public:
    vector<int> dp;
    int solve(int n) {
        if(n <= 1) return n;
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = solve(n-1) + solve(n-2);
    }
    int nthFibonacci(int n) {
        // code here
        if(n <= 1) return n;
        dp.resize(n+1, -1);
        solve(n);
        return dp[n];
    }
};