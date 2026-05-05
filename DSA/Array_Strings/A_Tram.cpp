#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,member = 0,max_menber = 0;
    for (int i = 1;i <= n;i++){
        cin>>a>>b;
        member -= a;
        member += b;
        if (max_menber < member){
            max_menber = member;
        }
    }
    cout<<max_menber<<endl;
}