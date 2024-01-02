class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans; vector<int> empty;
        int n=nums.size()+1,maxi=INT_MIN,index=-1;
        for(int i=0;i<nums.size();i++)
            nums[(nums[i]%n)-1]+=n;
        for(int i=0;i<nums.size();i++)
            if(nums[i]/n>maxi)
                maxi=nums[i]/n;
        while(maxi--)
            ans.push_back(empty);
        for(int i=0;i<nums.size();i++){
            int index=0;
            while(nums[i]/n){
                ans[index].push_back(i+1);
                index++;
                nums[i]-=n;
            }
        }
        return ans;
    }
};
