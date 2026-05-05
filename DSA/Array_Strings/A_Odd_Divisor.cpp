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
        long long a;
        cin>>a;
        while (a %2 == 0) a /= 2;
        
        cout<<(a > 1 ? "YES": "NO")<<endl;
    }
    
}