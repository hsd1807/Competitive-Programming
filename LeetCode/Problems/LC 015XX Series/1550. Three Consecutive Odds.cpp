class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int cnt = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2) {
                if (++cnt == 3)
                    return true;
            }
            else {
                cnt = 0;
            }
        }
        return false;
    }
};
