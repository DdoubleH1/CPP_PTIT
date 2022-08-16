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


int checkPrime(int n){
    if(n<2) return 0;
    else{
        for(int i = 2; i<= sqrt(n); i++){
            if(n % i == 0) return 0;
        }
    }
    return 1;
}


int main(){
    int n; cin >> n;
    if(checkPrime(n)) cout << "YES";
    else cout << "NO";
}