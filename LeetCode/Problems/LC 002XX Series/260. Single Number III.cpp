class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i]!=nums[i+1])
                ans.push_back(nums[i--]);
        }
        if(ans.size()==1) ans.push_back(nums.back());
        return ans;
    }
};
