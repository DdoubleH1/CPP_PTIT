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

ll f[100], n;

void checkFibo(){
    f[1]= 1 , f[2]=1;
    for(int i = 3; i <= n; i++){
        f[i] = f[i-2] + f[i-1];
    }
    cout << f[n] << endl;
}

int main(){
    test(){
        cin >> n;
        checkFibo();
    }
}