#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1,s2,s;
   cin>>s1>>s2>>s;
   map<char,int> m;
   map<char,int> m1;

   for (char c:s1) ++m[c];
   for (char c:s2) ++m[c];
   for (char c:s) ++m1[c];
   
    if (m == m1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}