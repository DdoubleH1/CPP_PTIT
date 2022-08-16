#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        int n, x; cin >> n >> x;
        int ans = 0;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool check = false;
        for(int i = 0; i < n; i++){
            if(a[i] == x){
                ans = i+1;
                check = true;
                break;
            }
        }
        if(check == true)
            cout << ans << endl;
        else cout << -1 << endl;
    }
}