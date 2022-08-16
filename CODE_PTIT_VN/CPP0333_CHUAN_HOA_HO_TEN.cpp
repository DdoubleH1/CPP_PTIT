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
    string s; getline(cin, s);
    lowerCase(s);
    stringstream ss(s);
    string token;
    vector<string> res;
    while(ss >> token){
        token[0] -= 32;
        res.push_back(token);
    }
    for(int i = 0; i < res.size()-1; i++){
        if(i == res.size()-2) cout << res[i] << ", ";
        else cout << res[i] << " ";
    }
    int l = res.size()-1;
    for(int i = 1; i < res[l].size(); i++){
        res[l][i] -= 32;
    }
    cout << res[l] << endl;
}