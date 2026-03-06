#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    set<char> ch;
    for (char c : s){
        if (islower(c)) ch.insert(c);
    }
    cout<<ch.size()<<endl;
}