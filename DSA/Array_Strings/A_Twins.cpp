#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,total_sum =0;
    cin>>n;
    vector<int>v;

    for (int i =0;i < n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        total_sum += v[i];

    }
    sort(v.rbegin(),v.rend());
    int left_sum = 0,count = 0;
    for (int i =0 ;i < v.size();i++){
        left_sum += v[i];
        count++;
        total_sum -= v[i];
        if (total_sum < left_sum){
            break;
        }
    }

    cout<<count<<endl;
}


