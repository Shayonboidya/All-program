/*Date: 30.04.2026*/

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
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if(x % 2==0 || y % 2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    


    return 0;
}