#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];


        for(int i =0; i < n;i++){
            for(int j = 1;j < n;j++){
                if(a[j-1] % 2 != a[j] % 2) swap(a[j-1],a[j]);
            }
        }
        for (int i = 0; i < n; ++i) cout<<a[i]<<" ";
        cout<<endl;


    }
}