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

int check(int n){
    int a = n % 10;
    int b = (n/10) % 10;
    if(a == 6 && b == 8) return 1;
    else return 0;
}

int main(){
    test(){
        int n; cin >> n;
        if(check(n)) cout << "1\n";
        else cout << "0\n";
    }
}