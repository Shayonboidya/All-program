/*Date: 30.04.2026*/

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
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>num2,num3,both,none;
        for(int i = 0;i < n;i++){
            int x;
            cin>>x;

            bool div2 = (x%2 == 0);
            bool div3 = (x%3 == 0);

            if(div2 && div3)both.push_back(x);
            else if(div2)num2.push_back(x);
            else if(div3)num3.push_back(x);
            else none.push_back(x);

        }

        for(int x:num2)cout<<x<<" ";
        for(int x:none)cout<<x<<" ";
        for(int x:num3)cout<<x<<" ";
        for(int x:both)cout<<x<<" ";
        cout<<endl;
    }
    


    return 0;
}