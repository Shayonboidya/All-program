#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        long long min_sum = (k*(k+1)/2);
        long long max_sum = k*n - (k - 1)*k/2;

        if(min_sum <= x and max_sum >= x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
}


