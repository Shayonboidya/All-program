// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int>s;
//     int k,l,m,n,d;
//     cin>>k>>l>>m>>n>>d;

//     for(int i =1;i <= d;i++){
//         if (k*i <= d){
//             s.insert(k*i);
//         }
//         if (l*i <= d){
//             s.insert(l*i);
//         }
//         if (m*i <= d){
//             s.insert(m*i);
//         }
//         if (n*i <= d){
//             s.insert(n*i);
//         }
       
//     }
    
//     cout<<s.size()<<endl; 


// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int damaged = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            damaged++;
        }
    }

    cout << damaged << "\n";
    return 0;
}
