#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    vector<pair<int ,int>>v;
    // for (int i= 0;i < n;i++){
    //     int a,h;
    //     cin>>h>>a;
    //     v.push_back({h,a});
    // }
    // int count = 0;
    // for (int i= 0;i < n;i++){
    //     for (int j = 0;j < n;j++){
    //         if (i == j) continue;
    //         if (v[i].first == v[j].second) {
    //             count++;
    //         } 
    //     }
    // }
    // cout<<count<<endl;
    unordered_map<int,int> away_freq;
    for (int i =0;i< n;i++){
        int h,a;
        cin>>h>>a;
        v.push_back({h,a});
        away_freq[v[i].second]++;
    }
    int count  =0;
    for (int i =0;i< n;i++){
        
        int homeColour = v[i].first; 
        count += away_freq[homeColour];
    }
    cout<<count<<endl;

}