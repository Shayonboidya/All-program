#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int c1 = n*a;
    int c2 = (n / m) * b + (n % m) * a;
    int c3 = ((n + m - 1) / m) * b;
    cout<<min({c1,c2,c3})<<endl;
    
}