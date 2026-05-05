/*Date: 30.04.2026*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool ispalindrome(vector<int>&v, int l,int r){
    while(l < r){
        if(v[l] != v[r]){
            return false;
        }
        l++;r--;
    }
    return true;
}

int getMex(vector<int> &v, int l, int r) {
    int len = r - l + 1;
    vector<int> freq(len + 5, 0);
    for (int i = l; i <= r; i++) {
        if (v[i] < freq.size())
            freq[v[i]]++;
    }
    int max = 0;
    while (freq[max] > 0) max++;
    return max;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n*2);
        for(int i = 0; i< n*2;i++){
            cin>>v[i];
        }

        int ans = 0;
        for(int i =0; i< n*2;i ++){
            for(int j =i; j< n*2;j++){
                if(ispalindrome(v,i,j)){
                    int max_l = getMex(v,i,j);
                    ans = max(ans,max_l);
                }
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}