class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        sort(arr,arr+n);
        int start=0,end=0,cnt=0;
        while(end<n){
            if(arr[start]!=arr[end])
                start=end;
            if((end-start+1)>n/k){
                cnt++;
                while(start<n && arr[start]==arr[end])
                    end++;
                continue;
            }
            end++;
        }
        return cnt;
    }
};
