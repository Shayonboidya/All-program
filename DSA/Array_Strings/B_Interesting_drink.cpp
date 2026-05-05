#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>s;
    int n;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    int m;
    cin>>m;
    for (size_t i = 0; i < m; i++)
    {
        int k;
        cin>>k;
        int ans = upper_bound(s.begin(),s.end(),k) - s.begin();
        cout<<ans<<endl;
    }
    
    

}
