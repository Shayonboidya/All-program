/*Date: 04.03.2026*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int solved(vector<int> &v,int n,int k){
    int c_s = 0,idx = 0;
    for(int i = 0; i< n;i++) c_s += v[i];

    int m_sum = c_s;
    for(int i = k; i< n;i++){
        c_s += v[i];
        c_s -= v[i-k];
        if(m_sum > c_s){
            m_sum = c_s;
            idx = i-k+1;
        }
    }
    return idx+1;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int>h(n);
    for(int i =0;i < n;i++) cin>>h[i];

    cout<<solved(h,n,k)<<endl;



    return 0;
}