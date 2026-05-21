/*Date: 18.05.2026*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        ll g = n /3;
    
        ll i = n % 3;
        ll ans = g * min(3*a,b) + min(i*a,b);
        cout<<ans<<endl;
        /* code */
    }
    


    return 0;
}