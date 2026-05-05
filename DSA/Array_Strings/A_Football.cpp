#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 1,max_count = 1;
    for (int i = 1 ;i < s.size();i++){
        if (s[i-1] == s[i]){
            count++;
            if (max_count < count){
                max_count = count ;
            }
        }
        else{
            count = 1;
        }
    }
    if (max_count >= 7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}