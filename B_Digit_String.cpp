/*Date: 18.05.2026*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> pref1(n+1,0), pref3(n+1,0), pref2(n+1,0);

        for (int i = 0; i < n; i++) {
            pref1[i+1] = pref1[i] + (s[i]=='1');
            pref3[i+1] = pref3[i] + (s[i]=='3');
            pref2[i+1] = pref2[i] + (s[i]=='2');
        }

        int ans = 0;

        ans = max(ans, pref1[n] + pref3[n]);
        for (int i = 0; i <= n; i++) {
            int left = pref1[i] + pref3[i];
            int right = pref2[n] - pref2[i];

            ans = max(ans, left + right);
        }

        cout << n - ans << "\n";
    }

    return 0;
}