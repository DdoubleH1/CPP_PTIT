#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int n, m;
int a[1000005], b[1000005];

int main(){
    test(){
        cin >> n >> m;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        sort(b, b+m);
        cout << (ll) a[n-1] * b[0] << endl;
    }
}