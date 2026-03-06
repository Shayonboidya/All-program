#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    // for (int i =1 ;i <= n;i++){
    //     for (int j =1;j <= m;j++){
    //         if (i % 2 != 0) cout<<"#";
    //         else{
    //             if (i % 4== 0){
    //                 cout<<((j == 1)? "#":".");
    //             }else{   
    //                 cout<<((j == m)? "#":".");
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }

    string full = string(m,'#');
    string end_has = string(m-1,'.')+"#";
    string strart_has = "#"+string(m-1,'.');

    for (int i =1 ; i<= n;i++){
        if (i % 2 != 0){
            cout<<full<<endl;
        }
        else if(i % 4==0){
            cout<<strart_has<<endl;
        }else{
            cout<<end_has<<endl;
        }
    }
    


    
}