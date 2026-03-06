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
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for (int i = 0; i < n;i++) cin>>v[i];
        int ans = v[0];
        for(int i = 1; i < n;i++){
            
            ans = max(ans, v[i] - v[i-1]);
        }
        ans = max(ans,(x-v[n-1])*2);
        cout<<ans<<endl;
        /* code */
    }
    
}