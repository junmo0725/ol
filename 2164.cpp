#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    queue<int>q;
    for(int i=n; i>=1; i--)
        q.push(i);
    while(q.size()){
        q.pop();
        q.front()=q.back();
        q.back()=q.front();
    }
    cout<<q.front();
    return 0;
}