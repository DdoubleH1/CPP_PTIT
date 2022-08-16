#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

set<string> res;

int main(){
    test(){
        scanf("\n");
        string s; getline(cin, s);
        res.insert(s);
    }
    cout << res.size() << endl;
}