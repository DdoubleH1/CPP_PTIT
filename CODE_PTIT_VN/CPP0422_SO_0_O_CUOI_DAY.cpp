#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)


int main(){
    test(){
        // int n; cin >> n;
        // ll a[n];
        // multiset<ll> none0;
        // multiset<ll> only0;
        // for(int i=0; i<n; i++){
        //     cin >> a[i];
        //     if(a[i] == 0) only0.insert(a[i]);
        //     else none0.insert(a[i]);
        // }

        // for(auto x: none0){
        //     cout << x << " ";
        // }
        // for(auto x: only0){
        //     cout << x << " ";   
        // }
        // cout << endl;

        int n, k = 0;
        cin >> n;
        long long a[n], b[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
                b[k++] = a[i];
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}