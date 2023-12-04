#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/* Complete the 'contacts' function below.
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts 2D_STRING_ARRAY queries as parameter. */

void lpsfind(string s, vector <int> &lps){
    int prefix = 0;
    int suffix = 1;
    while(suffix < s.size()){
        if(s[prefix]== s[suffix]){
            lps[suffix] = prefix + 1;
            suffix++;
            ++prefix;
        }
        else{
            if(prefix == 0) suffix++;
            else prefix = lps[prefix -1];
        }
    }
}

int KMP_MATCH(string haystack, string needle){
    int cnt = 0;
    vector <int> lps(needle.size(), 0);
    lpsfind(needle, lps);
    int first = 0, second =0;
    while(first<haystack.size() && second < needle.size()){
        if(haystack[first]== needle[second]){
            first++;
            ++second;
        }
        else{
            if(second == 0) first++;
            else second = lps[second -1];
        }
        if(second == needle.size()){
            cnt++;
            second = 0;
        }
    }
    return cnt;
}

vector<int> contacts(vector<vector<string>> queries) {   
    int n = queries.size();
    vector <int> ans;
    int cnt =0;
    string c;
    for(int i=0;i<n;i++){
        if(queries[i][0][0]=='a')
            c+=queries[i][1];   
    }
    for(int i=0;i<n;i++){
        if(queries[i][0][0]=='f'){
                ans.push_back(KMP_MATCH(c, queries[i][1]));
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ofstream fout(getenv("OUTPUT_PATH"));
    
    string queries_rows_temp;
    getline(cin, queries_rows_temp);

    int queries_rows = stoi(ltrim(rtrim(queries_rows_temp)));

    vector<vector<string>> queries(queries_rows);

    for (int i = 0; i < queries_rows; i++) {
        queries[i].resize(2);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            string queries_row_item = queries_row_temp[j];

            queries[i][j] = queries_row_item;
        }
    }

    vector<int> result = contacts(queries);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
