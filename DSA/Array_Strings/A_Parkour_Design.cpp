/*Date: 08.04.2026*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solved(long long x,long long y){
    
    if((x - 2*y)%3 == 0 && x >= y){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    
    while (n--)
    {
        long long x,y;
        cin>>x>>y;
        solved(x,y);
    }
    


    return 0;
}