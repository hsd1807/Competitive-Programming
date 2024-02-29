class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> colors(3,0);
        for (auto i : nums) {
            colors[i]++;
        }
        int index = 0;
        for (int i = 0; i < 3; i++) {
            while(colors[i]) {
                nums[index++] = i;
                colors[i]--;
            }
        }
    }
};
