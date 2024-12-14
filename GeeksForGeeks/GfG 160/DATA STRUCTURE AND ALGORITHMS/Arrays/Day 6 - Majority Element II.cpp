class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        vector<int> ans;
        map<int,int> m;
        for (int i = 0; i < arr.size(); i++) {
            if (m[arr[i]] > arr.size() / 3) {
                continue;
            }
            m[arr[i]]++;
            if (m[arr[i]] > arr.size() / 3) {
                ans.push_back(arr[i]);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
