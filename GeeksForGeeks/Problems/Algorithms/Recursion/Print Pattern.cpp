class Solution{
public:
    void pattern(vector<int>&ans,int N){
        ans.push_back(N);
        if(N>5) pattern(ans,N-5);
        else ans.push_back(N-5);
        ans.push_back(N);
    }

    vector<int> pattern(int N){
        vector<int> ans;
        if(N<1) ans.push_back(N);
        else pattern(ans,N);
        return ans;
    }
};
