class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        bool once=0;
        for(int i=0;i<n-1;i++){
        if(!once)
        {
                if(nums[i]>nums[i+1]){
                    if(i>0 && nums[i+1]<nums[i-1])
                    nums[i+1]=nums[i];
                    else
                    nums[i]=nums[i+1];
                    once=1;
                }
        }
        else
        {
            if(nums[i]>nums[i+1])
                return 0;
        }
        }
        return 1;
    }
};
