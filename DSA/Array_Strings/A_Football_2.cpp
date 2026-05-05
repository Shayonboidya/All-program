#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    unordered_map<string,int>mp;
    string s;
    while (t--)
    {
        cin>>s;
        mp[s]++;
    }
    int mx = 0;
    for(auto it:mp){
        mx = max(mx,it.second);
    }
    for(auto it:mp){
        if(mx == it.second) cout<<it.first<<endl;
    }

    
}