#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,c2= 0,c3 = 0;
        cin>>n;
        while(n % 2 == 0){
            n /= 2;
            c2++;
        }
        while(n % 3 == 0){
            n /= 3;
            c3++;
        }
        if(n != 1|| c2 > c3) cout<<-1<<endl;
        else{
            int ans = (c3-c2)+c3;
            cout<<ans<<endl;
        }
        
    }
}