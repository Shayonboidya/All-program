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
        int left,right;
        for (size_t i = 0; i < s.size(); i++)
        {
            left = s[0]+s[1]+s[2];
            right = s[3]+s[4]+s[5];
        }
        cout<<(left==right? "YES" : "NO")<<endl;   
    }
    
}