class Solution {
  public:
    vector<int> dp;
    int solve(int n, int x, int y, int z) {
        if(n == 0) return 0;
        if(n < 0) return -1;
        if(dp[n] != -1) return dp[n];
        
        int a = solve(n-x, x, y, z);
        int b = solve(n-y, x, y, z);
        int c = solve(n-z, x, y, z);
        
        int ans = max({a, b, c});
        if(ans == -1) return dp[n] = -1;
        return dp[n] = 1 + ans;
    }
    int maximizeTheCuts(int n, int x, int y, int z) {
        
        dp.resize(n+1, -1);
        int ans = solve(n, x, y, z);
        if(ans == -1) return 0;
        return ans;
    }
};