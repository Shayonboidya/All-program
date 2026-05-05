#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool all_upper = true;
    bool expct_first_upper = true;
    for (char c:s){
        if (!isupper(c)){
            all_upper = false;
            break;
        }
    }
    for (int i =1;i < s.size();i++){
        if (!isupper(s[i])){
            expct_first_upper = false;
            break;
        }
        
    }
    if (all_upper || expct_first_upper){
        for(char &c:s){
            if(isupper(c)) c = tolower(c);
            else c= toupper(c);
        }
    }
    cout<<s<<endl;


}