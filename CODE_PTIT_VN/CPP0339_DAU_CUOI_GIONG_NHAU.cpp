#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)


ll C(int n){
    ll k = (n-1)*n;
    return k/2;
}

int main(){
    test(){
        string s; cin >> s;
        map<char, int> mp;
        for(int i = 0; i <s.size(); i++){
            mp[s[i]]++;
        }
        int ans = 0;
        for(auto x: mp){
            // cout << x.first << " " << x.second << endl;
            if(x.second > 1)
                ans += C(x.second);
        }
        // cout << s.size() << endl;
        cout << ans + s.size() << endl;
    }
}