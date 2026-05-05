#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    
    auto it1 = s.begin();
    auto it2 = next(it1);
    int sum = 0;
    while (it2 != s.end())
    {
        sum += (*it2 - *it1);
        it1++;
        it2++;
    }
    cout<<sum<<endl;


}