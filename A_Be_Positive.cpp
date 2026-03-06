#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int zero = 0,neg = 0,ans = 0;
        for (int i =0;i< n;i++){
            cin>>a[i];
            if (a[i] == -1){
                neg++;
            }
            if (a[i] == 0){
                zero++;
            }
        }
        if (neg % 2 ==0){
            ans = zero;
        }else{
            ans = zero + 2;
        }
        cout<<ans<<endl;
                
    }
    
}