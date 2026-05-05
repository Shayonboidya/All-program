#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        set<int>s;
        for (size_t i = 0; i < 3; i++)
        {
            int x;
            cin>>x;
            s.insert(x);   
        }
        
        auto it = s.begin();
        ++it;
        cout<<*it<<endl;
    }
    
}