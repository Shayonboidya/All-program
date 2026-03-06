#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    int count = 0;
    int nots[] = {100,20,10,5,1};
    for (int i =0;i < 5;i++){
        count += n/nots[i];
        n = n % nots[i];
    }  

    cout<<count<<endl;
}