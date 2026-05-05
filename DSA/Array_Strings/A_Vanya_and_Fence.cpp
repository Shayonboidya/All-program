#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int num[n];
    int width = 0;
    for (int i =0;i < n;i++){
        cin>>num[i];
        if (num[i] <= h){
            width += 1;
        }
        else if(num[i] > h){
            width += 2;
        }
    }
    cout << width<<endl;
}