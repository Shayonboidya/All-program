#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b<c and a<b) cout<<"STAIR"<<endl;
        else if(a<b and b>c) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
    
}