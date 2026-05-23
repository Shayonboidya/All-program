/*Date: 23.05.2026*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(ll &x:a) cin>>x;
        for(ll &x:b) cin>>x;

        for(int i =0;i < n;i++){
            if(a[i] > b[i]){
                swap(a[i],b[i]);
            }
        }
        ll sum =0;
        for(ll i:b){
            sum += i;
        }
        ll max_a = *max_element(a.begin(),a.end());
        cout<<max_a + sum<<endl;
    }


    return 0;
}