int countDistinct(vector<int>& arr) {
    // code here
    unordered_set<int> set(arr.begin(), arr.end());
    return set.size();
}