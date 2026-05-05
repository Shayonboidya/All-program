#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    vector<int>v;
    for (int i = 0;i < n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int count = 0;
    
    for (int i = 1;i < v.size();i++){
        if (v[i-1] == v[i]){
            count++;
        }
    }
    cout<<count<<endl;
}