class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        int n=s1.size();
        for(int i=0;i<s2.size();i++){
            if(s2[i]==s1[0]){
                bool check=true;
                for(int j=1;j<s1.size();j++){
                    if(s1[j]!=s2[(i+j)%n]){
                        check=false;
                        break;
                    }
                }
                if(check) return 1;
            }
        }
        return 0;
    }
};
