#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

// int n; ll a[10000000] = {0};
set<int> res;

void solve(ll a){
    while(a > 0){
        res.insert(a % 10);
        a /= 10;
    }
}

int main(){
    test(){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            solve(a[i]);
        }
        for(auto x: res){
            cout << x << " ";
        }
        cout << endl;
        res.clear();
    }
}