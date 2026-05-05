#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v(4);
    string s;
    for(int i = 0; i < 4;i++) cin>>v[i];
    cin>>s;
    int ans= 0;
    for(auto x:s){
        ans += v[x - '1'];
    }
    cout<<ans<<endl;
}