#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if (a % b != 0){
            int r = a / b;
            int rem = (b*(r+1)) - a;
            cout<<rem<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}
