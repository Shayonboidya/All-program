#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d,count =0;
        cin>>a>>b>>c>>d;
        int v[] = {b,c,d};
        for(int x:v){
            if (a < x) count++;
        }
        cout<<count<<endl;
    }
    
}