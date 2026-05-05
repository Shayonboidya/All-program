#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    getline(cin, s);          // input: abracadabra\0abraka (typed as abracadabra\0abraka)

    // "\\0" কে আসল null byte এ রূপান্তর
    size_t pos = s.find("\\0");
    if (pos != string::npos) {
        s.replace(pos, 2, "\0", 1);
    }

    // output array তৈরি (literal এর মতো শেষে অতিরিক্ত \0 যোগ করা)
    char line[100];
    memcpy(line, s.c_str(), s.size() + 1); // string এর null সহ কপি

    // এখন ঠিক literal এর মতো শেষেও আরেকটা null যোগ করি
    line[s.size() + 1] = '\0';   // extra null byte
    int totalSize = s.size() + 2;

    cout << totalSize << " " << strlen(line) << endl;
    return 0;
}
