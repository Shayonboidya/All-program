/*Date: 24.02.2026*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i <n;i++)cin>>v[i];

        int score = 0;
        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++){
                if(v[i] == v[j]) score++;
                
            }
        }
        cout<<score<<endl;
        /* code */
    }
    


    return 0;
}