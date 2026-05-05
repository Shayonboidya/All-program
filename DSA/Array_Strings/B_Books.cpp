#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t,max_book = 0;
    cin>>n>>t;
    vector<int>v(n),s;
    for(int i = 0;i < n;i++)cin>>v[i];
    int sum = 0,k = 0;
    for(int j = 0; j < n;j++){
        sum += v[j];
        while(sum > t){
            sum -= v[k];
            k++;
        }
        max_book = max(max_book,j-k+1);

    }
    // auto max = *max_element(v.begin(),v.end());
    cout<<max_book<<endl;
}