#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        multiset<char>se1;
        multiset<char>se2;
        cin>>s1>>s2;
        for(char ch:s1) se1.insert(ch);
        for(char ch:s2) se2.insert(ch);

        if(se1 == se2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}