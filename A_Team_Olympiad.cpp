#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<int,vector<int>>mp;
    
    for(int i =1 ;i <= n; i++){
        int x;
        cin>>x;
        mp[x].push_back(i);
    }
    int w = min({mp[1].size(),mp[2].size(),mp[3].size()});
    cout<<w<<endl;

    for(int i = 0;i < w;i++){
        cout<<mp[1][i]<<" "<<mp[2][i]<<" "<<mp[3][i]<<endl;
    }
}
