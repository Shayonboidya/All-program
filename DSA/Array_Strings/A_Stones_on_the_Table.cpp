#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int count = 0;
    for (int i = 1;i < n;i++){
        s[i] = toupper(s[i]);
        if (s[i-1] == s[i]){
            count++;
        } 
    }    
    cout << count << endl;
}
