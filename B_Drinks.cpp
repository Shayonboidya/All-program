#include<bits/stdc++.h>
using namespace std;
int main(){
    double num,sum = 0;
    cin>>num;
    int n = num;
    while(n--){
        double j;
        cin>>j;
        if (j != 0){
            sum += (j/100.0);
        }
    }

    cout<<fixed<<setprecision(12)<<(sum/num)*100<<endl;
}
