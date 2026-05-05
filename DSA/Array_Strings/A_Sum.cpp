#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        multiset<int>s;
        cin>>a>>b>>c;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        auto it = s.begin();
        auto it1 = next(it);
        auto it2 = next(it1);
        if (*it + *it1 == *it2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}