#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    vector<int> lucky={4,7,44,47,74,77,444,447,474,477,744,747,774,777};//1 -1000
    cin>>n;
    for(int x: lucky){
        if (n % x == 0){
            cout<< "YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}