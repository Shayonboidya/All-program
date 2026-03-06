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
        string save = "codeforces",aa;
        cin>>aa;
        auto pos = save.find(aa);
        if(pos != string::npos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}