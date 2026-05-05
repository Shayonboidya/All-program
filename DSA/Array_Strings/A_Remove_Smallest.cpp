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
        vector<int>v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        bool possible = true;
        for (size_t i = 0; i < n-1; i++)
        {
            if(v[i+1] - v[i] > 1){
                possible = false;
                break;
            }
        }
        cout<<(possible?"YES":"NO")<<endl;
        

    }
    

}