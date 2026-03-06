#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin>>p;
    int isTrue = 0;
    for (int i =0; i < p.size();i++){
        if (p[i] == 'H'||p[i] == '9'||p[i] == 'Q'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;


}