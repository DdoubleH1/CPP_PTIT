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

int solve(int n){
    int sum = 0;
    int tmp = n;
    while(tmp > 0){
        sum += tmp % 10;
        tmp /= 10;
    }
    if(sum > 9) return solve(sum);
    else return sum;
}

int main(){
    test(){
        int n; cin >> n;
        cout << solve(n) << endl;
    }
}