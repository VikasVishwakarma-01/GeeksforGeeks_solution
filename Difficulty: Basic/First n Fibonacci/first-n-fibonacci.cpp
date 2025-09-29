// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        if(n == 1) return {0};
        if(n == 2) return {0, 1};
        vector<int> v;
        int a = 0;
        int b = 1;
        v.push_back(a);
        v.push_back(b);
        for(int i = 2; i < n; i++) {
            int c = a + b;
            v.push_back(c);
            a = b;
            b = c;
        }
        
        return v;
    }
};