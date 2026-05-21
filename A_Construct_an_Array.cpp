/*Date: 21.05.2026*/
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n) {
    vector<int> a;
    unordered_set<int> used, sums;

    for (int i = 0; i < n; i++) {
        for (int v = 1; v <= 2 * n; v++) {
            if (used.count(v) || sums.count(v)) continue;

            if (i > 0) {
                int new_sum = a.back() + v;
                if (used.count(new_sum) || sums.count(new_sum)) continue;
            }

            a.push_back(v);
            used.insert(v);

            if (i > 0) {
                sums.insert(a[a.size() - 2] + a[a.size() - 1]);
            }
            break;
        }
    }

    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> res = solve(n);
        for (int x : res) cout << x << " ";
        cout << "\n";
    }

    return 0;
}