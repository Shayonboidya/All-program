#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double l;
    cin>>n>>l;

    vector<double>v(n);
    for(int i=0; i< n;i++) cin>>v[i];

    sort (v.begin(),v.end());
    double max_gap = 0.0;
    for (size_t i = 1; i < n; i++)
    {
        double gap = v[i] - v[i-1];
        max_gap = max(max_gap,gap);
    }
    double d = max(v[0],max(l-v[n-1],max_gap/2.0));

    cout<<fixed<<setprecision(10)<<d<<endl;
    
}