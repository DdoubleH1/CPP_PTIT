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
    double sum;
    for(double i = 1; i <= n; i++){
        sum += (double)1/i;
    }
    cout << setprecision(4) << fixed << sum << endl;
}