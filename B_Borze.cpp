#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,ans;
    cin>>s;

    for (size_t i = 0; i < s.size();)
    {
        if (s[i] == '.'){
            ans += '0';
            i++;
            
        }
        else{
            (s[i+1] == '.')? ans +='1' : ans += '2';
            i += 2;
        }
    } 
    cout<<ans<<endl;
        
    
    
}