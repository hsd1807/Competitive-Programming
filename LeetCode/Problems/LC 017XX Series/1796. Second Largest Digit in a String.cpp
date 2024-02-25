class Solution {
public:
    int secondHighest(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<bool> digits(10,0); bool second = false; int smax = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] <= '9')
                digits[s[i]-'0'] = 1;
        }
        for (int i = 9; i >= 0; i--) {
            if (digits[i] && !second) second = true;
            else if (digits[i]) {
                smax = i;
                break;
            }    
        }
        return smax;   
    }
};
