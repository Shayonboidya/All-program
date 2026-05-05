#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int num[n];
    for (int i =0 ;i < n;i++){
        cin>>num[i];
    }
    int count = 0;
    for (int i =0 ;i < n;i++){
        if (num[i]  > 0){
            if (num[i] >= num[k-1]){
                count++;
            }
        }
    }
    cout<<count<<endl;
} 