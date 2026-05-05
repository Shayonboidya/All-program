#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cheak[256] = {0};
    int count  = 0;
    for (int i = 0;i < s.size();i++){
        if (cheak[(int)s[i]] == 0){
            count++;
            cheak[(int)s[i]] = 1;
        }     
    
    }
    if (count % 2 != 0){
        cout<<"IGNORE HIM!"<<endl;
    }else{

        cout<<"CHAT WITH HER!"<<endl;
    }

}