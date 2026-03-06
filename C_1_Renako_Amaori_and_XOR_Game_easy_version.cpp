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
        cin>>n;
        vector<int>a(n),m(n);
        for(int i = 0;i< n;i++) cin>>a[i];
        for(int i = 0;i< n;i++) cin>>m[i];
        int cnt_a =0 ,cnt_m = 0;
        for(int i =0;i< n;i++){
            if(a[i] != m[i]){
                if(i%2 == 0) cnt_a++;
                else cnt_m++;
            }
        }
        if(cnt_m >0 and cnt_a == 0) cout<<"Mai"<<endl;
        if(cnt_a >0 and cnt_m == 0) cout<<"Ajisai"<<endl;
        else cout<<"Tie"<<endl;
    }
    

}