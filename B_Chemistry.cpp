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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        int odd_cnt = 0;
        for(int x:freq){
            if(x % 2 != 0) odd_cnt++;
        }
        if(k >= odd_cnt-1 && (n-k)>0) cout<< "YES"<<endl;
        else cout<<"NO"<<endl;
    }   
}