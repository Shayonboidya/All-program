#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int>v;
        int n;
        cin>>n;
        int place = 1;
        while (n != 0)
        {
            int rem = n % 10;
            if (rem != 0) v.push_back(rem * place);
            n /= 10;
            place *= 10;
        }
        cout<<v.size()<<endl;
        for (int x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}