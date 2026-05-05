#include<bits/stdc++.h>
using namespace std;

vector<pair<long long,long long>>knightmove(long long x,long long y,long long a,long long b){
    vector<pair<long long,long long>>move;
    long long dx[] = {a,a,-a,-a,b,b,-b,-b};
    long long dy[] = {b,-b,b,-b,a,-a,a,-a};

    for (size_t i = 0; i < 8; i++)
    {
        move.push_back({x + dx[i],y + dy[i]});
    }
    return move;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        long long xK,yK,xQ,yQ;
        cin>>xK>>yK>>xQ>>yQ;

        auto k_move = knightmove(xK,yK,a,b);
        auto Q_move = knightmove(xQ,yQ,a,b);

        set<pair<long long,long long>>K_set(k_move.begin(),k_move.end());
        set<pair<long long,long long>>Q_set(Q_move.begin(),Q_move.end());
        int cnt =0;
        for(auto cc: K_set){
            if(Q_set.count(cc)) cnt++;
        }
        cout<<cnt<<endl;
    }
    
}