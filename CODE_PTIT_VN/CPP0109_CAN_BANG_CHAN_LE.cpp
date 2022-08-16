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

int check(int i){
    int odd = 0, even = 0;
    while(i > 0){
        int tmp = i % 10;
        if(tmp % 2 == 0) even++;
        else odd++;
        i /= 10;
    }
    if(even == odd) return 1;
    return 0;
}

int checkNum(int i){
    int count = 0;
    while(i > 0){
        i/=10;
        count++;
    }
    return count;
}

int main(){
    int n; cin >> n;
    int count = 0;
    for(int i = pow(10, n-1); i <= pow(10, n); i++){
        if(checkNum(i) % 2 == 0){
            if(check(i) == 1){
                cout << i << " ";
                count++;
            }
        }
        if(count == 10){
            cout << endl;
            count = 0;
        }
    }

    // cout << pow(10, 1) << endl;
}