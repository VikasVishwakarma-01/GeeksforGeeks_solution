class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i = 0; i < arr.size()/2; i++) {
            swap(arr[i], arr[n - 1 - i]);
        }
        
    }
};