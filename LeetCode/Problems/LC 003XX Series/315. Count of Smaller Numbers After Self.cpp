class Solution {
public:
    void merge(vector<vector<int>>& nums, int start, int mid, int end, vector<vector<int>>& aux) {
        for(int i = start; i <= end; i++) {
            aux[i] = nums[i];
        }

        int inversion_count_per_element = 0;
        int index1 = start, index2 = mid + 1;

        for (int index = start; index <= end; index++) {
            if (index1 > mid) {
                nums[index] = aux[index2++];
            }
            else if (index2 > end || aux[index1][0] <= aux[index2][0]) {
                nums[index] = aux[index1++];
                nums[index][2] += inversion_count_per_element;
            }
            else {
                nums[index] = aux[index2++];
                inversion_count_per_element++;
            }
        }
    }
    void merge_sort(vector<vector<int>>& nums, int start, int end, vector<vector<int>>& aux) {
        if (start < end) {
            int mid = (start + end) / 2;
            merge_sort(nums, start, mid, aux);
            merge_sort(nums, mid + 1, end, aux);
            merge(nums, start, mid, end, aux);
        }
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> nums_copy, aux;

        for (int i = 0; i < n; i++) {
            nums_copy.push_back({nums[i], i, 0});
            aux.push_back({nums[i], i, 0});
        }

        merge_sort(nums_copy, 0, n - 1, aux);

        vector<int> counts(n, 0);
        for (int i = 0; i < n; i++) {
            counts[nums_copy[i][1]] = nums_copy[i][2];
        }
        return counts;
    }
};
