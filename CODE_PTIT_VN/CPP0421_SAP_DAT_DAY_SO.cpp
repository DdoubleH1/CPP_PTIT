#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)


int main(){
    test(){
        int n; cin >> n;
        ll a[n], b[n] = {};
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i] = -1;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j == a[i])
                    b[j] = a[i];
            }
        }
        for(int i=0; i<n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}