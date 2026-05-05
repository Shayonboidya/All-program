#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    int cheak[n];
    for (int i = 1;i <= n;i++){
        cin>>num[i];
        cheak[num[i]] = i;
    }
    for (int i = 1;i <= n;i++){
        cout<<cheak[i]<<" ";
    }
        
}