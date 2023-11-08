class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        bool once=false;
        for(int i=0;i<n-1;i++){
        if(!once)
        {
                if(nums[i]>nums[i+1]){
                    if(i>0 && nums[i+1]<nums[i-1])
                    nums[i+1]=nums[i];
                    else
                    nums[i]=nums[i+1];
                    once=true;
                }
        }
        else
        {
            if(nums[i]>nums[i+1])
                return false;
        }
        }
        return true;
    }
};
