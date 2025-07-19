#include <bits/stdc++.h>

using namespace std;

bool solve(string s){
    vector <char> st;
    for(auto c : s){
        if(c=='(' || c=='['){
            st.push_back(c);
        }else if(c==')'){
            if(st.empty() || st.back()=='['){
                return false;
            }
            st.pop_back();
        }else if(c==']'){
            if(st.empty() || st.back()=='('){
                return false;
            }
            st.pop_back();
        }
    }
    return st.size()==0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    while(getline(cin, s)){
        if(s=="."){
            break;
        }
        else if(solve(s)==false)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }
    return 0;
}