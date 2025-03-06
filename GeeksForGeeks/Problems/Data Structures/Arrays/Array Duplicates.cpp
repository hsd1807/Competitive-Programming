class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> ans;
        map<int, int> m;
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]]++;
            if (m[arr[i]] == 2) {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};
