class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        unordered_set<int> set;
        int n = arr.size();
        int pre = 0;
        for(int i = 0; i < n; i++) {
            pre += arr[i];
            if(set.find(pre) != set.end() || pre == 0) {
                return true;
            }
            else {
                set.insert(pre);
            }
        }
        
        return false;
    }
};