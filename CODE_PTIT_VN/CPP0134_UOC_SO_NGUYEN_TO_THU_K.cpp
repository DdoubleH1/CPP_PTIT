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
        vector<int> res;
        int n, k; 
        cin >> n >> k;
        for(int i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
               res.push_back(i);
               n /= i;
            }
        }
        if(n >= 2 ){
            res.push_back(n);
        }
        if(k > res.size()) cout << -1;
        else cout << res[k-1];
        cout << endl;
    }
}