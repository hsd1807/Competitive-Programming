class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0, valindex = nums.size()-1;
        while (index <= valindex) {
            if (nums[index] == val) {
                swap(nums[index--], nums[valindex--]);
            }
            index++;
        }
        return index;
    }
};
