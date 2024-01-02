class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt=0;
        vector<int> expected;
        expected=heights;
        sort(expected.begin(),expected.end());
        for(int i=0;i<heights.size();i++){
            cnt+=heights[i]!=expected[i];
        }
        return cnt;
    }
};
