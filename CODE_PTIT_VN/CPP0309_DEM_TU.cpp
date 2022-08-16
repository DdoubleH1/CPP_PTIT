#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        scanf("\n");
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> res;
        string tmp;
        while(ss >> tmp){
            res.push_back(tmp);
        }
        cout << res.size() << endl;
    }
}