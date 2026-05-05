#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int officers =0,crime =0;
    for (int i =0;i <n;i++){
        int x;
        cin>>x;
        if (x == -1){
            if (officers > 0) officers--;
            else crime++;
        }else{
            officers += x;
        }

    }
    cout<<crime<<endl;
}