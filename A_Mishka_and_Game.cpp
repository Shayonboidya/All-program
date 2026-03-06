#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    long long cnt_a = 0, cnt_b = 0;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) cnt_a++;
        else if (a < b)cnt_b++;
    }
    if(cnt_a > cnt_b) cout<<"Mishka"<<endl;
    else if(cnt_a < cnt_b) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    
}