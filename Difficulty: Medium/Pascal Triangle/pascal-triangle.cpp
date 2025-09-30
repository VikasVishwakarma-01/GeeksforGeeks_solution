class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<int>> dp(n, vector<int>(n, 1));
        
        for(int i = 2; i < n; i++) {
            for(int j = 1; j < i; j++) {
                dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]);
            }
        }
        
        return dp[n-1];
    }
};
