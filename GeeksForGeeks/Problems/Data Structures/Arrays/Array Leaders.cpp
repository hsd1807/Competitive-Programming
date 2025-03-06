class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        ans.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++) {
            while (ans.size() && arr[i] > ans.back()) {
                ans.pop_back();
            }
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
