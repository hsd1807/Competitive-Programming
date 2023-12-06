class Solution {
public:
    int numberOfMatches(int n) { /* return n-1; -> Because in every match one team gets Eliminated. Therefore, it will take (n-1) matches to eliminate (n-1) teams, and get the Winner. */
        int matches=0;
        while(n!=1){
            if(n%2==0){
                matches+=n/2;
                n/=2;
            }
            else{
                matches+=(n-1)/2;
                n++;
                n/=2;
            }
        }
        return matches;
    }
};
