#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int total_time = 240-k;
    int time =0,count =0;

    for (size_t i = 1; i <= n; i++)
    {
        time += i*5;
        if(total_time >= time) count++;
        else break;
        
    }
    cout<<count<<endl;
    
}