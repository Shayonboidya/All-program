#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v(t);
    for(int i =0;i <t;i++) cin>>v[i];
    
    
    for (size_t i = 0; i < t; i++)
    {
        int rating = v[i];
        if (1900 <= rating){
            cout<<"Division 1"<<endl;
        }
        else if (1600 <= rating && rating <= 1899){
            cout<<"Division 2"<<endl;
        }
        else if (1400 <= rating && rating <= 1599){
            cout<<"Division 3"<<endl;
        }
        else if (rating <= 1399){
            cout<<"Division 4"<<endl;
        }
        
    }
    

}