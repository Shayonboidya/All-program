#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0,len = s.size();
    int num[len];

    for (int i = 0;i < s.size();i++){
        if (s[i] != '+'){
            num[count++] = s[i] - '0';
            
        }

    }
    for (int i = 0;i < count;i++){
        for (int j = i+1;j < count;j++){
            if (num[i] >= num[j]){
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp ;
            }
        }
        
    }
    for (int i = 0 ; i < count;i++){
        cout<< num[i];
        if (i < (count-1)) cout<<"+";
    }

   
}