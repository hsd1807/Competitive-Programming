class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end()); int index=0;
        while(index<nums.size()-1){
            if(nums[index]==nums[index+1])
                index+=2;
            else
                return nums[index];
        }
        return nums.back();
    }
};
