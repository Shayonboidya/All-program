#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>v;
    int p;
    cin>>p;
    for (int i = 0;i < p;i++){
        int x;
        cin>>x;
        v.insert(x);
    }
    
    int q;
    cin>>q;
    for (int i = 0;i < q;i++){
        int y;
        cin>>y;
        v.insert(y);
    }
    if (v.size()== n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    
}