// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n,a,b,c;
//     cin>>n>>a>>b>>c;
//     int ans=0;
//     for (size_t i = 0; i*a <= n; i++)
//     {
//         for (size_t j = 0; i*a+j*b <= n; j++)
//         {
//             int rem = n - (i*a + j*b);
//             if(rem % c == 0){
//                 int k = rem /c;
//                 ans = max(ans,(int)(i+j+k));
//             }
//         }
//     }
//     cout<<ans<<endl;
    
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>v(n+1,-1);
    v[0] = 0;
    for (size_t i = 0; i <= n; i++)
    {
        if(v[i] != -1){
            if(i+a <= n)v[i+a] = max(v[i+a],v[i]+1);
            if(i+b <= n)v[i+b] = max(v[i+b],v[i]+1);
            if(i+c <= n)v[i+c] = max(v[i+c],v[i]+1);
        }
    }
    cout<<v[n]<<endl;
    
}