#include<iostream>
#include<cstdlib>

using namespace std;
int main(){
    int n = 5,d;
    int num[5][5];
    for (int i = 0; i < n;i++){
        for (int j = 0;j < n;j++){
            cin>>num[i][j];
            if (num[i][j] != 0){
                d = abs(2-i) + abs(2-j);
            }
        }
    }

    cout<<d<<endl;
}