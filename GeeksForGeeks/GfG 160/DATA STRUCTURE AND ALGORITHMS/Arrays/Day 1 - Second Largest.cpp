// User function template for C++
class Solution {
  public:
    // Function returns the second largest elements
    int getSecondLargest(vector<int> &arr) {
        int largest = arr[0];
        int secondLargest = -1;
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            }
            else if (largest != arr[i] && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
        
        return secondLargest;
    }
};
