/*Date: 21.02.2026*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v1(n),v2(n),a;
    for(int i = 0;i < n;i++) cin>>v1[i];//564
    for(int i = 0;i < n;i++) cin>>v2[i];//243
    int num1= 0,num2 = 0;
    for(int i = 0; i < n;i++){
        num1 = (num1 * 10) + v1[i];
        num2 = (num2 * 10) + v2[i];
    }
    int ans = num1+num2;
    while (ans>0)
    {
        int rem = ans %10;
        a.push_back(rem);
        ans /= 10;
        /* code */
    }
    
    for(int val:a)cout<<val<<" ";


    return 0;
}