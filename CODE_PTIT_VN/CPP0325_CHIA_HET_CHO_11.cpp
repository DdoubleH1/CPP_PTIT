#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

bool check_11(string s){
    ll odd = 0, even = 0;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0)
            even += s[i] - '0';
        else 
            odd += s[i] - '0';
    }
    if(abs(even - odd) % 11 == 0) return true;
    else return false;
}

int main(){
    test(){
        string s; cin >> s;
        if(check_11(s) == true) cout << 1 << endl;
        else cout << 0 << endl;
    }
}