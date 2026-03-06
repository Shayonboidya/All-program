#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>> t;
    while (t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> v(n);
        for (int i =0 ;i < n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int cnt = 0,i = 0;
        while (b--)
        {
            cnt++;
            if(b == 1){

                int c = min(a,b+v[i]);
                b += c-1;
                i++;
            }

        }
        
        cout<<cnt<<endl;
    }
}