#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    // int freq[256] = {0};

    // int count = 0;
    // for (int i =0;i < n;i++){
    //     s[i] = tolower(s[i]);
    //     if (freq[int(s[i])] == 0){
    //         count++;
    //         freq[int(s[i])] = 1;
    //     }
        
    // }
    // if (count == 26){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }

    /*using set*/
    set<char>latter;
    for (char c:s){
        latter.insert(tolower(c));
    }
    if (latter.size() == 26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}