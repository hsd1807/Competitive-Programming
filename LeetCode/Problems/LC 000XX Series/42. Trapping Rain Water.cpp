class Solution {
public:
    int trap(vector<int>& height) {
        int start=0,end=height.size()-1,leftmax=0,rightmax=0,water=0;
        while(start<end){
            if(height[start]>=height[end]){
                if(rightmax-height[end]>0){
                    water+=rightmax-height[end];
                }
                else{
                    rightmax=height[end];
                }
                end--;
            }
            else {
                if(leftmax-height[start]>0){
                    water+=leftmax-height[start];
                }
                else{
                    leftmax=height[start];
                }
                start++;
            }
        }
        return water;
    }
};
