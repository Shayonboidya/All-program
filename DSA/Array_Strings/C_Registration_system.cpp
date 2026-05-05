#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<string,int>bd;
    string s;
    while (n--)
    {
        cin>>s;
        if (bd.find(s) == bd.end()){
            bd[s] = 0;
            cout<<"OK"<<endl;
        }
        else{
            int cnt = ++bd[s];
            string new_s = s+to_string(cnt);

            cout<<new_s<<endl;
            bd[new_s] = 0;

        }
    }
    
}