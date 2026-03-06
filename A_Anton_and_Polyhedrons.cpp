#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int count = 0;
    for (int i = 0;i < n; i++){
        cin>>s;
        if (s == "Icosahedron"){
            count += 20;
        }
        else if (s == "Octahedron"){
            count += 8;
        }
        else if (s == "Dodecahedron"){
            count += 12;
        }
        else if (s == "Tetrahedron"){
            count += 4;
        }
        else if (s == "Cube"){
            count += 6;
        }
    }
    cout<<count<<endl;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     map<string, int> faces = {
//         {"Tetrahedron", 4},
//         {"Cube", 6},
//         {"Octahedron", 8},
//         {"Dodecahedron", 12},
//         {"Icosahedron", 20}
//     };

//     int total = 0;
//     string s;
//     while (n--) {
//         cin >> s;
//         total += faces[s];
//     }

//     cout << total << "\n";
//     return 0;
// }
