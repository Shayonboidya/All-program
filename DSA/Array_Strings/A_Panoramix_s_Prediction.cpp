#include<bits/stdc++.h>
using namespace std;
int isprime(int x){
    bool prime = true;
    for(int i = 2; i <= sqrt(x);i++){
        if(x % i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for(int i = n+1; i <= m;i++){
        if(isprime(i)){
            if(i == m) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}