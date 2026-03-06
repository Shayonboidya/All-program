#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> card(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>card[i];
    }

    int sereja =0 ,dima =0;
    int left =0 ,right =n-1;
    bool turn = true;
    while (left <= right)
    {
        int take;
        if(card[left] > card[right]){
            take = card[left];
            left++;
        }else{
            take = card[right];
            right--;
        }
        if(turn){
            sereja += take;
        }
        else{
            dima += take;
        }
        turn = !turn;
    }

    cout<<sereja <<" "<<dima<<endl;
    
    
}