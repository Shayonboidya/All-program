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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i =0;i < n;i++){
            cin>>v[i];
        }
        auto it = find(v.begin(),v.end(),k);
        if(it != v.end()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}