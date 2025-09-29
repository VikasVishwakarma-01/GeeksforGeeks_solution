class Solution {
  public:
    // Function to find the nth catalan number.
    vector<int> dp;
    int solve(int n) {
        if(n <= 1) return 1;
        
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans += solve(i) * solve(n - 1 - i);
        }
        
        return ans;
    }
    int findCatalan(int n) {
        // code here
        dp.resize(n+1, -1);
        return solve(n);
    }
};