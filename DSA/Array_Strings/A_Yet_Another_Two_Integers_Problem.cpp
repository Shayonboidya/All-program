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
        long long a,b;
        int cnt= 0;
        cin>>a>>b;
        long long p = abs(a-b);
        long long ans = (p+9)/10;
        cout<<ans<<endl;
    }
}
