#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long prev,curr;
    cin>>prev;

    int count = 1,max_count = 1;
    for (int i =1 ; i < n;i++){
        cin>>curr;
        if (curr >= prev) count++;
        else count  =1;
        max_count = max(max_count,count);
        prev = curr;
    }
    
    cout<<max_count<<endl;
}