#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upper = 0,lower = 0;
    for (int i = 0;i < s.size();i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            lower++;
        }
        if (s[i] >= 'A' && s[i] <= 'Z'){
            upper++;
        }
    }
    for (int i = 0 ;i  < s.size();i++){

        if (upper > lower){
            s[i] = toupper(s[i]);
            cout<<s[i];
        }
        else if (upper < lower){
            s[i] = tolower(s[i]);
            cout<<s[i];
        }
        else if (upper == lower){
            s[i] = tolower(s[i]);
            cout<<s[i];
        }
    }

    

}