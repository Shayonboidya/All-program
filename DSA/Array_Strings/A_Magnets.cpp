#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> num(n);
    int count = 1;
    for (int i = 0;i < n;i++){
        cin>>num[i];
    }
    for (int i = 0;i < n-1;i++){
        if (num[i] != num[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
}