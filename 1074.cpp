#include <bits/stdc++.h>

using namespace std;
int n, r, c;
int recu(int y, int x, int l){
        if(r<y && c<x){
            if(l==1) 
                return 0;
            else 
                return recu(y-l/2, x-l/2, l/2);
        }
        else if(r<y && c>=x){
            if(l==1) 
                return 1;
            else 
                return recu(y-l/2, x+l/2, l/2)+l*l;
        }
        else if(r>=y && c<x){
            if(l==1) 
                return 2;
            else 
                return recu(y+l/2, x-l/2, l/2)+l*l*2;
        }
        else if(r>=y && c>=x){
            if(l==1)   
                return 3;
            else 
                return recu(y+l/2, x+l/2, l/2)+l*l*3;
        }
}
int main()
{
    int t = 1;
    
    cin>>n>>r>>c;
    for(int i=0;i<n;i++){
        t*=2;
    }
    cout<<recu(t/2, t/2, t/2);
    return 0;
}