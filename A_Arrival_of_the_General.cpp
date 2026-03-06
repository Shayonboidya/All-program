#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for (int i =0;i < n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    auto maxval = max_element(v.begin(),v.end());
    auto minval = min_element(v.rbegin(),v.rend());


    int max_index = (maxval - v.begin());
    int min_index = (v.rend()-minval-1);
    int ans = (max_index)+(n-1-min_index);
    if (max_index > min_index){
        cout<<ans-1<<endl;
    }else{
        cout<<ans<<endl;
    }
    //cout<<max_index<<endl<<min_index<<endl;
    
}