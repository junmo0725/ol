#include <bits/stdc++.h>

using namespace std;
long long int a, b, c;
long long int r(int k){
    if(k==1)
        return a%c;
    
    long long int h=r(k/2);
    h=h*h%c;
    if(k%2==0)
        return h;
    else
        return h*a;
}
int main()
{
    cin>>a>>b>>c;
    cout<<r(b);
    return 0;
}