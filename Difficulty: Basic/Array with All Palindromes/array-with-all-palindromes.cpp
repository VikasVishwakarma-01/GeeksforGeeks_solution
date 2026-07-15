class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            string s = to_string(arr[i]);
            string t = s;
            reverse(t.begin(), t.end());
            if(t != s)
                return false;
        }
        
        return true;
    }
};