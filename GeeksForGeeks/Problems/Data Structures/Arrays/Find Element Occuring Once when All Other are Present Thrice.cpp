class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        sort(arr,arr+N); int index=0;
        while(index<N-3){
            if(arr[index]==arr[index+1]&&arr[index+1]==arr[index+2]&&arr[index+2]==arr[index])
                index+=3;
            else
                return arr[index];
        }
        return arr[N-1];
    }
};
