class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n1(1001, 0), n2(1001, 0), ans;
        for (int i = 0; i < nums1.size(); i++) {
            n1[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            n2[nums2[i]]++;
        }
        for (int i = 0; i < 1001; i++) {
            while (n1[i]-- && n2[i]--) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
