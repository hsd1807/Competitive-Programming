class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int ans = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= x) {
                if (ans == -1) {
                    ans = i;
                }
                else {
                    if (arr[i] >= arr[ans]) {
                        ans = i;
                    }
                }
            }
        }
        return ans;
    }
};
