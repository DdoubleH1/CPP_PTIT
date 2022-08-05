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

int n, a[105];

int main(){
    test(){
        cin >> n;
        int res;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i = 0; i<n; i++){
            int sum = 0;
            if(a[i] == 0){
                while(a[++i] != 0){
                    sum += a[i];
                    
                }
                if(sum < 2) res += 2 - sum;
            }
        }
        cout << res << endl;
    }
}