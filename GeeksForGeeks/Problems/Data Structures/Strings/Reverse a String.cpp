class Solution
{
    public:
    string reverseWord(string str)
    {
        int start=0,end=str.size()-1;
        while(start<end){
            swap(str[start],str[end]);
            start++,end--;
        }
        return str;
    }
};
