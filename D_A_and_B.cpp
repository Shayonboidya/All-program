#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0,ans  =0;
        for (int i =0;i < n;i++){
            if (s[i] != s[i+1]){
                swap(s[i],s[i+1]);
                count++;
            }
        }
        if (n<2){
            ans;
            return 0;
        }else{
            ans = count;
        }
        cout<<ans<<endl;
    }
    
}