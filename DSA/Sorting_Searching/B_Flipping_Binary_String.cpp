/*Date: 21.02.2026*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> ones, zeros;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                ones.push_back(i + 1);
            else
                zeros.push_back(i + 1);
        }

        int cnt1 = ones.size();
        int cnt0 = zeros.size();
        if (cnt1 % 2 == 0) {
            cout << cnt1 <<endl;
            for (int idx : ones)
                cout << idx << " ";
            cout << endl;
        }

        else if (cnt0 % 2 == 1) {
            cout << cnt0 <<endl;
            for (int idx : zeros)
                cout << idx << " ";
            cout <<endl;
        }
        else {
            cout << -1 <<endl;
        }
    }


    return 0;
}