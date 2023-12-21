class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int maxDiff=INT_MIN;
        for(int i=0;i<points.size()-1;i++){
            if(points[i+1][0]-points[i][0]>maxDiff){
                maxDiff=points[i+1][0]-points[i][0];
            }
        }
        return maxDiff;
    }
};
