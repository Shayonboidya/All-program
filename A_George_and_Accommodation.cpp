#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n--){
        int p,q;
        cin>>p>>q;
        int sum = q-p;
        if (sum > 1){
            count++;
        }

    }
    cout<<count<<endl;
}