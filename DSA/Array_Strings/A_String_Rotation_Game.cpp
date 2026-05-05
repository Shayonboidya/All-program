/*Date: 21.02.2026*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int cnt = 0;
        for(int i =1 ; i< n;i++){
            if(s[i] != s[i-1])cnt++;
        }
        if(cnt == 0) cout<<1<<endl;
        else{
            int block = cnt +1;
            if(s[0] != s[n-1]) cout<<min(n,block+1)<<endl;
            else cout<<block<<endl;
    
        }
        /* code */
    }
    


    return 0;
}