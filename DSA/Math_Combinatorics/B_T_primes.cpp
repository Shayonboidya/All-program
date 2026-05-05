#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int MAX = 1000000;
    vector<bool>is_prime(MAX+1,true);
    is_prime[0] = is_prime[1] = false;

    for (size_t i =2; i*i <= MAX; i++)
    {
        if(is_prime[i]){
            for (size_t j = i*i; j <=MAX; j+=i)
            {
                is_prime[j] = false;
            }
            
        }
    }

    unordered_set<long long>t_prime;
    for (size_t i = 2; i <= MAX; i++)
    {
        if(is_prime[i]) t_prime.insert(1LL*i*i);
    }
    
    

    long long t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        if(t_prime.count(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}