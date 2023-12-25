class Solution {
public:
    void lower(string &s, int start, int end){
        for(int i=start;i<end;i++)
            if(s[i]<'a')
                s[i]+='a'-'A';
    }

    void capitalize(string &s, int start, int end){
        if(s[start]>96) s[start]-=('a'-'A');
        for(int i=start+1;i<end;i++){
            if(s[i]<'a')
                s[i]+='a'-'A';
        }
    }

    string capitalizeTitle(string title) {
        int start=0,end=0;
        for(int i=0;i<title.size();i++){
            if(title[i]==' '){
                if(end-start<3) lower(title,start,end);
                else capitalize(title,start,end);
                start=i+1;
            }
            end++;
        }
        if(end-start<3) lower(title,start,end);
        else capitalize(title,start,end);
        return title;
    }
};
