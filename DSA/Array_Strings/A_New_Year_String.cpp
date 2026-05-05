#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        bool newyear = false;
        if(s.find("26") != string::npos) newyear = true;  
        int sum = 0;
        for(char ch:s){
            sum += (ch - '0');
        }
        if(newyear == true or sum == 0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    
}