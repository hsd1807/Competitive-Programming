#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string str) {
    /*
    Take a stack and then iterate over the given string.
    Whenever we encounter a opening bracket, we will push it to the stack.
    and Whenever we encouter a closing bracket, we will check if the same opening pair of this bracket exists in stack or not.
    TC = O(N), SC = O(N)
    */
    stack<char> st;
    // (())
    for (int i = 0; i < str.size(); i++) {
        //Opening Bracket
        if (str[i] == '(' || str[i] == '{' || str[i] =='[') {
            st.push(str[i]);
        }
        //Closing Bracket
        else {
            if (st.empty()) {
                return "NO";
            }
            // {
            if (str[i] == ')') {
                if (st.top() == '(') {
                    st.pop();
                }
                else {
                    return "NO";
                }
            }
            // (
                if (str[i] == '}') {
                if (st.top() == '{') {
                    st.pop();
                }
                else {
                    return "NO";
                }
            }
            // [
                if (str[i] == ']') {
                if (st.top() == '[') {
                    st.pop();
                }
                else {
                    return "NO";
                }
            }
        }
    }
    if (st.empty()) return "YES";
    else return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
      
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

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
