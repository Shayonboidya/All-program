#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int>v;
        set<int>s;
        int n;
        cin>>n;
        for (int i=0 ; i< n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            s.insert(x);
        }
        int inc = s.size();
        int smsh = s.size()-1;

        cout<<inc+smsh<<endl;
    }
    
}