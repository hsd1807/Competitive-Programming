class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int ans = 0, first = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < fruits.size(); i++) {
            m[fruits[i]]++;                
            while (m.size() == 3) {
                m[fruits[first]]--;
                if (m[fruits[first]] == 0) {
                    m.erase(fruits[first]);
                }
                first++;
            }
            ans = max (ans, i - first + 1);
        }
        return ans;
    }
};
