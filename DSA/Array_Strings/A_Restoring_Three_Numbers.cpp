#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =4;
    vector<int>v(n);
    
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    sort(v.rbegin(),v.rend());
    int a = v[0] - v[1];
    int b = v[0] - v[2];
    int c = v[0] - v[3];
    cout<<a <<" "<<b<<" "<<c<<endl;
    
    

    

    
}