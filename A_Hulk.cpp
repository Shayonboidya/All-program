#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "I hate ",s5 = "that ";
    string s2 = "I love ",s6 = "it ";

    string s3 = "";

    int n;
    cin>>n;
    for (int i =1;i <= n;i++){
        if (i % 2 != 0){
            s3 += s1;
        }else{
            s3 += s2;
        }
        if (i == n){
            s3 += s6;
        }else{
            s3 += s5;
        }
    }
    cout<<s3<<endl;
}