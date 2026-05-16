/*Date: 16.05.2026*/

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
    while(t--){
        ll n,x1,x2,k;
        cin>>n>>x1>>x2>>k;
        
        ll dis = llabs(x1-x2);
        ll d = min(dis , n- dis);
        cout<<min(n-1, d+k)<<endl;
    }


    return 0;
}