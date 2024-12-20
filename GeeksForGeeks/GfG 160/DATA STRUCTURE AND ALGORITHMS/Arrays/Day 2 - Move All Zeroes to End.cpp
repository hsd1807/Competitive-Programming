class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int index = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > 0) {
                swap(arr[i], arr[index++]);
            }
        }
    }
};