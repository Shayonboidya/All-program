#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        auto it = max_element(v.begin(),v.end());
        cout<<*it<<endl;
    }
    
}