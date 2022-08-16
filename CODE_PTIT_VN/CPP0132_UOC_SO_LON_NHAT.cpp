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
        ll n; cin >> n;
        int max = 0;
        for(int i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
                if(i > max) max = i;
                n /= i;
            }
        }
        if(n >= 2) cout << n;
        else cout << max;
        cout << endl;
    }
}