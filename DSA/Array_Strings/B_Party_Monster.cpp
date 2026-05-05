/*Date: 30.04.2026*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    
    while (n--)
    {
        int m;
        cin>>m;
        string s;
        cin>>s;
        int left = 0, right = 0;
        if(m % 2 != 0){
            cout<<"NO"<<endl;
        }else{
            for(int i =0; i< m;i++){
                if(s[i] == '('){
                    left++;
                }
                else{
                    right++;
                }
            }
            if(left == right){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    


    return 0;
}