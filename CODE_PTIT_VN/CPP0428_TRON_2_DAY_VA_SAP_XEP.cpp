#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        multiset<int> res;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            res.insert(a[i]);
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            res.insert(b[i]);
        }
        for(auto x: res){
            cout << x << " ";
        }
        cout << endl;
    }
}