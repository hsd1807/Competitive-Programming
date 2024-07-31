class Solution {
  public:
    int totalFruits(vector<int> &arr) {
        int n = arr.size() + 1;
        int distinct = 0;
        int first = 0;
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            arr[(--arr[i]) % n] += n;
            if (arr[arr[i] % n] / n == 1) {
                distinct++;
                while (distinct == 3) {
                    arr[arr[first] % n] -= n;
                    if (arr[arr[first] % n] / n == 0) {
                        distinct--;
                    }
                    first++;
                }
            }
            ans = max (ans, i - first + 1);
        }
        return ans;
    }
};
