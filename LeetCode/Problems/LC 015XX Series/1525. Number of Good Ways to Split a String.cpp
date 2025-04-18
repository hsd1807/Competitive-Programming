class Solution {
public:
    int numSplits(string s) {
      unordered_map<char, int> m;
      vector<int> count(s.size(), 0);
      int distinct = 0;
      for (int i = 0; i < s.size(); i++) {
        if (!m[s[i]]) {
            distinct++;
            m[s[i]]++;
        }
        count[i] = distinct;
      }
      m.clear();
      distinct = 0;
      int ans = 0;
      for (int i = s.size() - 1; i > 0; i--) {
        if (!m[s[i]]) {
            distinct++;
            m[s[i]]++;
        }
        if (distinct == count[i - 1]) {
            ans++;
        }
      }
      return ans;  
    }
};
