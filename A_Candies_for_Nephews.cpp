#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    while (n--)
    {
        int a;
        cin>>a;
        int x =a;
        if (x % 3 != 0){
            int ans = 3 *((x/3)+1);
            cout<<ans -a<<endl;
        }else cout<<0<<endl;
    }
}