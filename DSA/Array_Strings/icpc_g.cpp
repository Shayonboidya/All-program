#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<long long> row(n), col(m);

        for(long long i = 0; i < n;i++){
            for(long long j = 0;j < m;j++){
                long long a;
                cin>>a;
                row[i] ^= a;
                col[j] ^= a;
            }
        }
        long long sum = 0,rem = 0;
        for(long long i = 0;i <n; i++) sum += row[i];
        for(long long j = 0;j <m; j++) sum += col[j];

        for(long long i = 0;i <n;i++){
            for(long long j = 0;j < m;j++){
                rem = max(rem,(row[i]&col[j]));
            }
        }
        cout << sum-(2*rem) << endl;
        
    }
    

    

}