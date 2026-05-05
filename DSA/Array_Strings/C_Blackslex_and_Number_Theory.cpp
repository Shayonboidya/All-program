// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll t;
//     cin>>t;
//     while (t--)
//     {
//         ll n;
//         cin>>n;
//         vector<ll>v(n);
//         for(int i = 0; i < n;i++) cin>>v[i];
//         ll max_gcd = 0;
//         for(int i = 1;i < n;i++){
//             max_gcd = __gcd(max_gcd, abs(v[i]-v[0]));
//         }
//         cout<<max_gcd<<'\n';
//     }
    
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) cin >> v[i];

        // Step 1: sort the array
        sort(v.begin(), v.end());

        // Step 2: find differences between consecutive elements
        ll max_k = LLONG_MAX;
        for (ll i = 1; i < n; i++) {
            ll diff = v[i] - v[i-1];
            max_k = min(max_k, diff);
        }

        cout << max_k << '\n';
    }
}
