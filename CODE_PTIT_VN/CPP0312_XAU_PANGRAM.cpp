#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        string s; cin >> s;
        int k; cin >> k;
        set<char> res;
        for (int i = 0; i < s.length(); i++){
            res.insert(s[i]);
        }
        if(res.size() + k >= 26) cout << 1 << endl;
        else cout << 0 << endl;

        // cout << res.size() << endl;
    }
}