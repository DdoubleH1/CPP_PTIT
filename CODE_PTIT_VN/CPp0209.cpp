#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

int n, q, a[10005], s[10005];
int l, r;

int main(){
    test(){
        cin >> n >> q;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        s[0] = a[0];
        for(int i = 1; i < n; i++){
            s[i] = s[i-1] + a[i];
        }
        while(q--){
            cin >> l >> r;
            cout << s[r-1] - s[l-1] + a[l-1] << endl;
        }
    }
}