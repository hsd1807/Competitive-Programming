string sort(string s){
    vector<int> alphabet(26,0);
    for(int i=0;i<s.size();i++)
        alphabet[s[i]-'a']++;
    s.clear();
  
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(alphabet[i]--)
            s+=c;
    }
    return s;
}
