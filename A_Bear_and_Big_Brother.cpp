#include<iostream>

using namespace std;
int main(){
    int limik,bob;
    cin>>limik>>bob;

    int year = 0;
    while(limik <= bob){
        limik *= 3;
        bob *= 2;
        year++;
    }
    cout<<year<<endl;
}