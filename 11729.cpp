#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> p;

void recu(int start, int mid, int end, int n){
    if(n==1){
        p.push_back({start, end});
        return;
    }
    recu(start, end, mid, n-1);
    p.push_back({start, end});
    recu(mid, start, end, n-1);
}
int main()
{
    int n;
    cin>>n;
    recu(1, 2, 3, n);
    cout<<p.size()<<"\n";
    for(auto c:p){
        cout<<c.first<<" "<<c.second<<"\n";
    }
    return 0;
}