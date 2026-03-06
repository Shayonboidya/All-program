#include<bits/stdc++.h>
using namespace std;
int main()
{
    // problem
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int count[3] = {0};
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c0=0,c1= 0,c2= 0;
        for (char c:s){
            if (c == '0') c0++;
            else if (c == '1') c1++;
            else if (c == '2') c2++;
        }

        string ans(n,'+');
        for(int i =0;i< c0;i++) ans[i] = '-';
        for(int i =0;i< c1;i++) ans[n-1-i] = '-';
        if (c2 > 0){
            for (int i = c0;i< n-c1;i++) ans[i] = '?';
        }
        cout<<ans<<endl;
    }
    
}