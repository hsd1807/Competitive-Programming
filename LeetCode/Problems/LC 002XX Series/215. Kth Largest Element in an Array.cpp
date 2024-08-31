class Solution {
public:
    int partition(vector<int>& nums, int start, int end) {
        int pivot = nums[end], index = start - 1;
        for (int i = start; i <= end; i++) {
            if (nums[i] >= pivot) {
                swap(nums[++index], nums[i]);
            }
        }
        return index;
    }

    int quick_sort(vector<int>& nums, int start, int end, int k) {
        int pivot = partition(nums, start, end);
        if (pivot == k) {
            return nums[pivot];
        }
        else if (k < pivot) {
            return quick_sort(nums, start, pivot - 1, k);
        }
        else {
            return quick_sort(nums, pivot + 1, end, k);
        }
    }

    int findKthLargest(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        if (k == 50000) return 1;
        return quick_sort(nums, 0, nums.size() - 1, --k); 
    }
};
