#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v(t);

    for (size_t i = 0; i < t; i++)
    {
        cin>>v[i];
    }
    int w = v[0];
    int x = v[0];
    int count =0;
    for (size_t i = 1; i < v.size(); i++)
    {
        if(v[i] > w){
            count++;
            w = v[i];
        }
        else if(v[i] <x){
            count++;
            x = v[i];
        }
    }
    cout<<count<<endl;
    
    
}