/******************************************************************************
                                Date: 04.02.2026
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int t;
    cin>>t;
    while (t--)
    
    {
        int sum = 0;
        for(int i = 0; i< 10; i++){
            cin>>s;
            for(int j = 0; j < 10; j++){
                if(s[j] == 'X'){
                    int d = min({i,j,9-i,9-j});
                    sum += (d+1);
                }
            }
        }
        cout<<sum<<endl;
        /* code */
    }
    

    return 0;
}