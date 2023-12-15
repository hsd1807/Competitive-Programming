string to_upper(string str)
{
    if(str.size()==0) return "";
    char c ='A'+str[0]-'a';
    str.erase(str.begin());
    return c+to_upper(str);
}
