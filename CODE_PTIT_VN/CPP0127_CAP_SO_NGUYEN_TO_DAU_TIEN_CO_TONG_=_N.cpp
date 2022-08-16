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

int n;

int checkPrime(int n){
    if(n<2) return 0;
    else{
        for(int i = 2; i<= sqrt(n); i++){
            if(n % i == 0) return 0;
        }
    }
    return 1;
}

void solve(){
    int check = 0;
    cin >> n;
    for(int i = 1; i <= n/2; i++){
        if(checkPrime(i) == 1){
            if(checkPrime(n - i) == 1){
                cout << i << " " << n - i << endl;
                check = 1;
                break;
            }
        }
    }
    if(check == 0) cout << -1 << endl;
}

int main(){
    test(){
        solve();
    }
}