#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v(3);
    for(int i =0;i < 3;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int def = v[2] - v[0];
    if(def >= 10)cout<<"check again"<<endl;
    else cout<<"final "<<v[1]<<endl;

}