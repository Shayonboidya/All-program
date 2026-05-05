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
        map<int,int>mp;
        int n;
        cin>>n;
        for(int i= 0;i <n ;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int ans = 0;
        for(auto &p: mp){
            if(p.first == p.second) continue;
            else if(p.first > p.second) ans += p.second;
            else if (p.first < p.second) ans += (p.second - p.first);
        }

        cout<<ans<<endl;
        /* code */
    }
    
}