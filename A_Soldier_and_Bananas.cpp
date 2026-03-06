#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int total_cost = 0;
    for (int i = 1; i <= w;i++){
        total_cost += k*i;
    }
    if(total_cost-n <= 0){
        cout<<"0"<<endl;
    }else{
        cout<<total_cost-n<<endl;
    }

}