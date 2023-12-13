class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> onesRow(grid.size(),0),onesCol(grid[0].size(),0),zerosRow(grid.size(),0),zerosCol(grid[0].size(),0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) onesRow[i]++,onesCol[j]++;
                else zerosRow[i]++,zerosCol[j]++;
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j]=onesRow[i]+onesCol[j]-zerosRow[i]-zerosCol[j];
            }
        }
        return grid;
    }
};
