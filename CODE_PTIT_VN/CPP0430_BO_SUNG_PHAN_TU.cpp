#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        int n; cin >> n;
        int a[n];
        set<int> res;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            res.insert(a[i]);
        }
        sort(a, a+n);
        int x = a[n-1] - a[0] + 1;
        cout << x - res.size() << endl;
        res.clear();
    }
}