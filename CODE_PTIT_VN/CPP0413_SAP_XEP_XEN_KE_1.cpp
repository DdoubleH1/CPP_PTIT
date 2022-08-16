#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int n, a[1005];

int main(){
    test(){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int l = 0, r = n-1;
        while(l < r){
            cout << a[r] << " " << a[l] << " ";
            l++; r--;
        }
        if(n % 2 != 0) cout << a[l];
        cout << endl;
    }
}