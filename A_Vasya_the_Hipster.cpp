#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int s = min(a,b);
    int c = abs(s-max(a,b));
    cout<<s<<" "<<c/2<<endl;

}