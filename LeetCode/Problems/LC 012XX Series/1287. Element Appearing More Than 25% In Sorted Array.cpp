class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int first=0,second=1,k=arr.size()/4;
        while(second<arr.size()){
            if(arr[first]!=arr[second])
                first=second;
            if(second-first+1>k) return arr[first];
            second++;
        }
        return arr[0];
    }
};
