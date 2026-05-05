#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int d =k;
    for (size_t i = 1; i < 10; i++)
    {
        if(d % 10 == 0 || d % 10 == r){
            cout<<i<<endl;
            return 0;
        }
        else {
            d =k * (i+1);
        }
    }
    
}