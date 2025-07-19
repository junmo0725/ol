#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, val;
    long long int s=0;
    vector<long long int> st;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>val;
        if(val==0)
            st.pop_back();
        else
            st.push_back(val);
    }
    while(!st.empty()){
        s+=st.back();
        st.pop_back();
    }
    cout<<s;
    return 0;
}