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
        string s;
        int n;
        cin>>n>>s;
        int ans = s.size();
        for(int i = 0;i < s.size()/2;i++){
            if(s[i] != s[s.size()-1-i]){
                ans -= 2;
            }else{
                break;
            }
        }
        cout<<ans<<endl;

    }
    
}