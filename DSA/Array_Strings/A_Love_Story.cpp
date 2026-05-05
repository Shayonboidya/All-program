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
        string s1 = "codeforces",s2;
        cin>>s2;
        int cnt = 0;
        for(int i = 0;i < s1.size();i++){
            if(s1[i] != s2[i]) cnt++;
        }
        cout<<cnt<<endl;
    }
    
}