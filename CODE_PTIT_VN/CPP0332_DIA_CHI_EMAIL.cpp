#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

void lowerCase(string &s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}

int main(){
    string s; getline(cin ,s);
    lowerCase(s);
    stringstream ss(s);
    string token;
    vector<string> res;
    while(ss >> token){
        res.push_back(token);
    }
    cout << res[res.size()-1];
    for(int i = 0; i < res.size()-1; i++){
        cout << res[i][0];
    }
    cout << "@ptit.edu.vn";
}