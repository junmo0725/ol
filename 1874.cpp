#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, idx=0;
    vector<int>st;
    vector<char>ans;
    vector<int>t;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        t.push_back(temp);
    }
    for(int i=1; i<=n; i++){
        st.push_back(i);
        ans.push_back('+');
        while(st.size() && st.back()==t[idx]){
            st.pop_back();
            idx++;
            ans.push_back('-');
        }
    }
    if(st.size()){
        cout<<"NO";
    }else{
        for(auto c :ans){
            cout<<c<<"\n";
        }
    }
    return 0;
}