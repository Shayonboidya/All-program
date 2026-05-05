#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i = 0; i < n;i++) cin>>v[i];
        ll total_time = 0;
        for(int i = 1; i < v.size();i++){
            total_time += abs(v[i] - v[i-1]);
        }
        ll max_gain  = 0;
        max_gain = max(max_gain, (ll)abs(v[0] - v[1]));
        max_gain = max(max_gain, (ll)abs(v[n-2]-v[n-1]));
        for(int k = 1;k < n-1;k++){
            ll gain = abs(v[k-1] - v[k]) + abs(v[k] - v[k+1]) - abs(v[k-1] - v[k+1]);
            max_gain = max(max_gain, gain);
        }
// a b c
// |a-b| + |b-c| - |a-c| = |0-1|+|1-2|-|0-2|
        cout<<total_time - max_gain<<endl;
    }
    
}