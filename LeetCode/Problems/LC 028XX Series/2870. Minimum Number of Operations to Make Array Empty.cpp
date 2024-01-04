class Solution {
public:
    int minOperations(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int start=0,end=1,operations=0;
       while(end<nums.size()){
            if(nums[start]!=nums[end]){
            if(end-start<2) return -1;
            else if((end-start)%3==0) operations+=(end-start)/3;
            else if((end-start)%3==2) {if(end-start>2) operations+=(end-start)/3; operations++;}
            else if(end-start>=4) operations+=(end-start-4)/3,operations+=2;
            else operations+=(end-start)/2;
            start=end;
           }
           end++;
       }
       if(end-start<2) return -1;
       else if((end-start)%3==0) operations+=(end-start)/3;
       else if((end-start)%3==2) {if(end-start>2) operations+=(end-start)/3; operations++;}
       else if(end-start>=4) operations+=(end-start-4)/3,operations+=2;
       else operations+=(end-start)/2;
       return operations;
    }
};
