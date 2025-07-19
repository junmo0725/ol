#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n; i++){
        cin>>s;
        vector<int>st;

        for(char c:s){
            if(c==')'){
                if(st.empty()){
                    st.push_back('c');
                    break;

                }
                else{
                    st.pop_back();
                }
            }
            else{
                st.push_back(c);
            }
        }
        if(st.empty())
            printf("YES\n");
        else
            printf("NO\n");
    
    }
    return 0;
}