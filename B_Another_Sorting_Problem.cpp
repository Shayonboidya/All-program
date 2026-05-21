#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);

    for (auto &x : a) cin >> x;

    long long k = -1;
    bool ok = true;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] <= a[i + 1]) continue;

        long long need = a[i] - a[i + 1];

        if (k == -1) {
            k = need;
        } else {
            if (k != need) {
                ok = false;
                break;
            }
        }
    }

    if (!ok) {
        cout << "NO\n";
        return;
    }

    if (k == -1) {
        cout << "YES\n";
        return;
    }

    vector<int> b(n, 0);

    // try all possible assignments consistent with k
    for (int i = 0; i < n; i++) {
        b[i] = 0; // not strictly needed, conceptual
    }

    // check feasibility by greedy assignment
    long long last = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        long long x1 = a[i];       // not chosen
        long long x2 = a[i] + k;   // chosen

        bool choose0 = (x1 >= last);
        bool choose1 = (x2 >= last);

        if (!choose0 && !choose1) {
            ok = false;
            break;
        }

        if (choose0) last = x1;
        else last = x2;
    }

    cout << (ok ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();
}