class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = end - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        if (nums.size() == 1);
        int index = -1, start = 0, end = nums.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] >= nums[0]) {
                index = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        if (target >= nums[0] && target <= nums[index]) {
            return binarySearch(nums, 0, index, target);
        }
        else if (index != nums.size() - 1 && target >= nums[index + 1] && target < nums[0]) {
            return binarySearch(nums, index + 1, nums.size() - 1, target);
        }
        else {
            return -1;
        }
    }
};
