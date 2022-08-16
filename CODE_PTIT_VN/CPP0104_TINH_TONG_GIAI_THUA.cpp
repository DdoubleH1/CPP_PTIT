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
    int n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        ll gt = 1;
        for(int j = 1; j <= i; j++){
            gt *= j;
        }
        sum += gt;
    }
    cout << sum;
}