/*Date: 13.02.2026*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int sum(int x){
    int sum = 0;
    while(x > 0){
        sum += (x%10);
        x /= 10;
    }
    return sum;
}


void solved(int n){
    int cnt = 0;
    for(int i = n; i <= n+90;i++){
        if(i - sum(i) == n) cnt++;
    }
    cout<<cnt<<endl;
}

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
        solved(n);
        
        /* code */
    }
    


    return 0;
}