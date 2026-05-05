#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y,w;
    cin>>y>>w;
    int d = max(w,y);
    int ans = 6-d+1;
    int n = __gcd(ans,6);
    cout<<ans/n<<"/"<<6/n<<endl;
}