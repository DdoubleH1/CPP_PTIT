#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        multiset <int> res;
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            res.insert(a[i]);
        }
        for(auto x: res){
            cout << x << " ";
        }
        cout << endl;
    }
}