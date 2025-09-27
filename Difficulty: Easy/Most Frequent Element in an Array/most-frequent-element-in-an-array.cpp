class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxFreq = -1;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
            maxFreq = max(maxFreq, mp[arr[i]]);
        }
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto x: mp) {
            if(x.second == maxFreq) {
                pq.push(x.first);
                if(pq.size() > 1) pq.pop();
            }
        }
        
        return pq.top();
    }
};