#include <bits/stdc++.h>
using namespace std;
// problem
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, rK, cK, rD, cD;
        cin >> n >> rK >> cK >> rD >> cD;

        long long dx = abs(rK - rD);
        long long dy = abs(cK - cD);
        if (dx % 2 != dy % 2){
            cout<<"-1"<<endl;
        }else{
            cout << max(dx, dy) << "\n";
        }

    }

    return 0;
}
