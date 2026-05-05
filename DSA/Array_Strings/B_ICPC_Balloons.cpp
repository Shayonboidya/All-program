/******************************************************************************
                                Date: 13.02.2026
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int n;
        vector<bool> fq(26,false);
        cin>>n>>s;
        
        int dis = 0;
        for(char ch:s){
            int idx = ch - 'A';
            if(!fq[idx]){
                fq[idx] = true;
                dis++;
            }
        }
        cout<<n+dis<<endl;
        /* code */
    }
    

    return 0;
}