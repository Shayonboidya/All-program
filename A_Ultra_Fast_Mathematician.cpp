#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3 = "";
    cin>>s1>>s2;
    int count = 0;
    for (int i =0; i < s1.size();i++){
        if (s1[i] != s2[i]){
            s3 += '1';
        }else{
            s3 += '0';
        }
    }

    cout<<s3<<endl;
}