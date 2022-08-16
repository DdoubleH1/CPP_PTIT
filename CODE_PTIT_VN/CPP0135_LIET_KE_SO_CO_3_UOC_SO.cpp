#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <cstring>
#include <set>
#include <map>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test()    int t; cin >> t; while (t--)

// bool check[1000005];
// int n;
// void sievePrime(int n){
//     for(int i = 2; i <= 1000005; i++){
//         check[i] == true;
//     }
//     for(int i = 1; i <= sqrt(; i++){
//         if(check[i] == true){
//             for(int j = 2*i; j <= sqrt(n); j+=i){
//                 check[j] = false;
//             }
//         }
//     }
// }
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
    test(){
        int n; cin >> n;
        // int a = sqrt(n);
        for(int i = 2; i <= sqrt(n); i++){
            if(checkPrime(i) == 1){
                cout << i*i << " ";
            }
        }
        cout << endl;
        // memset(check, false, sizeof(check));
    }
}