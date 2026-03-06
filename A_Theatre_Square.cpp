#include<iostream>

using namespace std;

int main(){

    long long n,m,a;
    cin>>n>>m;
    cin>>a;
    
    long long length = (n+a-1)/a;
    long long width = (m+a-1)/a;
    long long total_flagston = length * width;
    cout<<total_flagston<<endl;

}