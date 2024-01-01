class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt=0,first=0,second=0;
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        while(first<g.size()&&second<s.size()){
            if(s[second]>=g[first]){
                cnt++;
                second++;
            }
            first++;
        }
        return cnt;
    }
};
