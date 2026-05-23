/*Date: 23.05.2026*/

// unsolved
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> ops;
        int flip = 0;
        for(int i = 0; i < n; i++) {
            ll val = a[i];
            if(flip) val = -val;
            if(val > 0) {
                ops.push_back(i + 1);
                flip ^= 1;
            }
        }

        cout << ops.size() << "\n";
        for(int x : ops)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}