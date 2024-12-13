// User function Template for C++
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int index = arr.size() - 1;
        while (index >= 0) {
            if (arr[index] > arr[index - 1]) {
                break;
            }
            index--;
        }
        index--;
        if (index != -1) {
            for (int i = arr.size() - 1; i > index; i--) {
                if (arr[i] > arr[index]) {
                    swap(arr[i], arr[index]);
                    break;
                }
            }
            reverse(arr.begin() + index + 1, arr.end());
        }
        else {
            reverse(arr.begin(), arr.end());
        }
    }
};
