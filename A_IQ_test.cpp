#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;

    vector<int>evenIdx,oddIdx;

    for (int i =0;i < n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        if (v[i] %2 == 0 ){
            evenIdx.push_back(i+1);
        }else{
            oddIdx.push_back(i+1);
        }
    }
    if (evenIdx.size() == 1){
        cout<<evenIdx[0]<<endl;
    }else{
        cout<<oddIdx[0]<<endl;
    }
    
    
}