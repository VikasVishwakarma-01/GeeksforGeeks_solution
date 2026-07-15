
class Solution {
  public:
  
    long long lucas(int n) {
        // code here.
        const long long MOD = 1e9 + 7;
        if(n == 0) return 2;
        if(n == 1) return 1;
        
        long long a = 2;
        long long b = 1;
        long long c;
        for(int i = 2; i <= n; i++) {
            c = (a + b) % MOD;
            a = b;
            b = c;
        }
        
        return c % MOD;
        
    }
};