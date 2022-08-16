#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    string s1; getline(cin, s1);
    string s2; getline(cin, s2);
    stringstream ss(s1);
    string tmp;
    while (ss >> tmp){
        if(tmp != s2)
            cout << tmp << " ";
    }
}