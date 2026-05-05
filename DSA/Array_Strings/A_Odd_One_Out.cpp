#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        map<int,int>mp;
        for (size_t i = 0; i < 3; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        for(auto [num,cnt]:mp)
        {
            if (cnt == 1) cout<<num<<endl;
        }
    }
    
}