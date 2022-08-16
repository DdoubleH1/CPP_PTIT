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
    int a, b;
    cin >> a; cin >> b;
    if(a > b){
        for(int i = b; i <= a; i++){
            if(checkPrime(i)) cout << i << " ";
        }
    }
    else{
        for(int i = a; i <= b; i++){
            if(checkPrime(i)) cout << i << " ";
        }
    }
}