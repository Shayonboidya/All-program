/*Date: 05.03.2026*/

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
        int n;
        cin>>n;

        //solved
        if(n%4 !=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            int k = n/2;
            //even part
            for(int i =1;i <= k;i++)cout<<i*2<<" ";
            //odd part
            for(int i =1;i < k;i++)cout<<i*2-1<<" ";
            //last odd
            cout<<3*k -1<<endl;
            
        }
        // cout<<endl;
        /* code */
    }
    



    return 0;
}