#include<iostream>
using namespace std;
int main(){
    int a,b,c,n;
    cin>>n;
    int sum_a = 0,sum_b = 0,sum_c = 0;
    for (int i = 1; i <= n;i++){
        cin>>a>>b>>c;
        sum_a += a;
        sum_b += b;
        sum_c += c;
    }
    if (sum_a == 0 && sum_b == 0 && sum_c == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}