/*Date: 16.05.2026*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int &x:v)cin>>x;

        int c1 = 0, c2 =0, c0 = 0;
        
        for(int &x:v){
            if(x == 0)c0++;
            if(x == 1)c1++;
            if(x == 2)c2++;
        }
        int cnt = c0;
        int pr12 = min(c1,c2);
        cnt += pr12;
        c1 -= pr12;
        c2 -= pr12;
        cnt+= c1/3;
        cnt+= c2/3;
        cout<<cnt<<endl;
    }

    return 0;
}