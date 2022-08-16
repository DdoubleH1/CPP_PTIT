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

ll n, k;

int main(){
    test(){
        cin >> n >> k;
        ll res = 0;
        for(int i = 1; i <= n; i++){
            res += i % k; 
        }
        if(res == k)
            cout << 1 << endl;
        else cout << 0 << endl;
    }
}