#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)


ll convert(string s){
    ll sum = 0, tmp = 1;
    for(int i = s.length()-1; i >= 0; i--){
        sum += (s[i] - '0')*tmp;
        tmp*=2;
        tmp%=10;
    }
    return sum;
}

int main(){
    test(){
        string s;
        cin >> s;
        ll a = convert(s);
        // cout << a << endl;
        if (a % 5 == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}