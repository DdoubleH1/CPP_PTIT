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

ll lcm(ll a, ll b){
    int gcd = __gcd(a,b);
    return a*b/gcd;
}

int main(){
    test(){
        ll n; cin >> n;
        ll a = 1;
        for(ll i = 2; i <= n; i++){
            a = lcm(a, i);
        }
        cout << a << endl;
    }
}