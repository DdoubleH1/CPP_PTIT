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


int main(){
    test(){
        ll a, b; cin >> a >> b;
        cout << (a*b)/__gcd(a,b) << " " << __gcd(a,b) << endl;
    }
}