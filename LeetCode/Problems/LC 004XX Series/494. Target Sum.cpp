class Solution {
public:
    int ways(vector<int>& arr, int index, int sum, int target) {
        if (index == arr.size())
        {
            return sum == target;
        }
        return ways(arr, index+1, sum+arr[index], target) + ways(arr, index+1, sum-arr[index], target);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return ways(nums, 0, 0, target);
    }
};
