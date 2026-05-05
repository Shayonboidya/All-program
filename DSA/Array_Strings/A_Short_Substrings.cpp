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
        string s,ans;
        int k = 0;
        cin>>s;
        ans.push_back(s[0]);
        for(int i = 1; i < s.size();i += 2){
            ans.push_back(s[i]);
        }
            
        cout<<ans<<endl;
    }
    
}