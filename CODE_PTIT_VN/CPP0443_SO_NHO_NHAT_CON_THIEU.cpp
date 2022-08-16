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
        int sum = 0;
        for (int i = 0; i < n-1; i++){
            cin >> a[i];
            sum += a[i];
        }
        cout << (n+1)*n/2 - sum << endl;
    }
}