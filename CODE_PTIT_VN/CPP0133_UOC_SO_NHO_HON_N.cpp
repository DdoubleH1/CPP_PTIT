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

int n;
bool check[100000];

void sievePrime(int n){
    // memsets(check, true, sizeof(check));
    for(int i = 2; i <= n; i++){
        check[i] = true;
    }
    for(int i = 2; i <= n; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= n; j += i) {
                check[j] = false;
            }
        }
    }
}

int main(){
    test(){
        cin >> n;
        sievePrime(n);
        for(int i = 2; i <= n; i++){
            if(check[i] == true) {
                cout << i << " ";
            }
        }
        cout << endl;
        memset(check, true, sizeof(check));
    }
}