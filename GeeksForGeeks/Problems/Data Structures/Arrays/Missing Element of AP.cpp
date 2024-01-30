//User function template for C++
class Solution{   
public:
    int findMissing(int arr[], int n) {
        int d = (arr[n-1] - arr[0]) / n;
        int start = 0, end = n - 1, ans;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid]==(arr[0]+mid*d))
                start = mid + 1;
            else{
                ans = arr[0] + mid*d;
                end = mid - 1;
            }
        }
        return ans;
    }
};
