#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int main(){
    test(){
        int n;cin >> n;
        int a[n];
        int max1 = -1000005, max2 = -1000005;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int min = abs(a[0] + a[1]), MIN = a[0] + a[1];
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j < n; j++){
                int x = abs(a[j] + a[i]);
                if(x < min){
                    min = x;
                    MIN = a[i] + a[j];
                }
            }
        }
        cout << MIN << endl;
    }
}

