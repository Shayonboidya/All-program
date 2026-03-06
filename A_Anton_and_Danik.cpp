#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int antoni = 0,danic = 0;
    for (int i = 0 ;i < n;i++){
        s[i] = toupper(s[i]);
        if (s[i] == 'A'){
            antoni++;
        }
        if (s[i] == 'D'){
            danic++;
        }
    }
    if (antoni > danic){
        cout<<"Anton"<<endl;
    }
    else if(antoni < danic){
        cout<<"Danik"<<endl;
    }
    else if(antoni == danic){
        cout<<"Friendship"<<endl;
    }

}