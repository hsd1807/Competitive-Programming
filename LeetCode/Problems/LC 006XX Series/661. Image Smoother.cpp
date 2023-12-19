class Solution {
public:
    int smoother(vector<vector<int>>&img,int i, int j){
        int ans=img[i][j],cnt=1;
        if(i>0&&j>0) ans+=img[i-1][j-1],cnt++;
        if(i>0) ans+=img[i-1][j],cnt++;
        if(i>0&&j<img[0].size()-1) ans+=img[i-1][j+1],cnt++;
        if(j>0) ans+=img[i][j-1],cnt++;
        if(j<img[0].size()-1) ans+=img[i][j+1],cnt++;
        if(i<img.size()-1&&j>0) ans+=img[i+1][j-1],cnt++;
        if(i<img.size()-1) ans+=img[i+1][j],cnt++;
        if(i<img.size()-1 && j<img[0].size()-1) ans+=img[i+1][j+1],cnt++;
        return ans/cnt;
    }
    
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> ans(img.size(),vector<int>(img[0].size(),0));
        for(int i=0;i<img.size();i++){
            for(int j=0;j<img[0].size();j++){
                ans[i][j]=smoother(img,i,j);
            }
        }
        return ans;
    }
};
