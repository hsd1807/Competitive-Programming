class Solution
{
    public:
    int select(int arr[], int i, int n)
    {
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i])
            i=j;
        }
        return i;
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n-1;i++){
           int index=select(arr,i,n);
           swap(arr[index],arr[i]);
       }
    }
};
