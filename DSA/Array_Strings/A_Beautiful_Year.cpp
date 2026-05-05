#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    while (1)
    {
        ++year;
        int y = year;
        set<int>s;
        while (y > 0)
        {
            int rem = y % 10;
            s.insert(rem);
            y /= 10;
        }
        
        if (s.size() == 4){
            cout<<year<<endl;
            return 0;
            break;
        }
    }
    
}