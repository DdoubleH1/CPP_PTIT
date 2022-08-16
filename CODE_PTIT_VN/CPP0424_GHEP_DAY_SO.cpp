#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)


int main(){
    test(){
        int k, n; cin >> k >> n;
        multiset<int> res;
        int a[k][n];
        for(int i = 0; i < k; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                res.insert(a[i][j]);
            }
        }
        for(auto x: res){
            cout << x << " ";
        }
        cout << endl;
    }
}