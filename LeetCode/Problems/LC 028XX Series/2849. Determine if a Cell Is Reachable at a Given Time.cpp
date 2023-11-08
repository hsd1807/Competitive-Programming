class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy && t==1) return 0;
        int x=abs(fx-sx);
        int y=abs(fy-sy);
        if(max(x,y)<=t) return 1;
        else return 0;
    }
};
