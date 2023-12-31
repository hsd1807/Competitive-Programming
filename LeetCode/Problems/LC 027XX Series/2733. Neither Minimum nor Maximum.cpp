class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3) return -1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini) mini=nums[i];
            if(nums[i]>maxi) maxi=nums[i];
            if(mini!=nums[i]&&maxi!=nums[i]) return nums[i];
        }
        return (mini!=nums[0]&&maxi!=nums[0]?nums[0]:nums[1]);
    }
};
