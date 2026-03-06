#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),[](char c){return tolower(c);});
        if(s == "yes") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}