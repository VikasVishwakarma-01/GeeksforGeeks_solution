class Solution {
  public:
    bool flag = false;
    
    void partition(vector<int>& arr,int idx, int subset1, int target) {
        if(flag) return;
        
        if(subset1 == target) {
            flag = true;
            return;
        }
        
        if(idx == arr.size() or subset1 > target) return;
        
        subset1 += arr[idx];
        partition(arr, idx + 1, subset1, target);
        subset1 -= arr[idx];
        partition(arr, idx + 1, subset1, target);
        
    }
    
    bool isSubsetSum(vector<int>& arr, int target) {
        // code here
        
        int subset1 = 0;
        partition(arr, 0, subset1, target);
        
        return flag;
    }
};