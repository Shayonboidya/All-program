#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n, k, l, c, d, p, nl, np;
    cin>> n>>k>>l>>c>>d>>p>>nl>>np;
    multiset<int>mp;
    mp.insert((k*l)/nl);
    mp.insert(c*d);
    mp.insert(p/np);
    auto it = mp.begin();
    
    cout<<*it/n<<endl;
}