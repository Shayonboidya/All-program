#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans = min(a,b);
    if(ans % 2== 0) cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
}