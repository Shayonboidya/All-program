#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<string>word;
    size_t start = 0,pos;

    while ((pos = s.find("WUB",start)) != string::npos)
    {
        if (pos > start){
            word.push_back(s.substr(start,pos-start));
        }
        start = pos + 3;
    }
    if (start < s.size()){
        word.push_back(s.substr(start));;
    }

    for (size_t i =0;i< word.size();i++){
        if (i > 0) cout<<" ";
        cout<<word[i];
    }
}
    