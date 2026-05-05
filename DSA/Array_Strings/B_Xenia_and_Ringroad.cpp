#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,m,step =0,currnt =1;
    cin>>n>>m;
    for (size_t i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        step += (x >= currnt)? x-currnt : n - currnt + x;
        currnt = x;
    }
    cout<<step<<endl;
}