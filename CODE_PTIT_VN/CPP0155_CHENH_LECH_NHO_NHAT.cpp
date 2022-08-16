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

int a[100005], n;

int main(){
    test(){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int min = __INT32_MAX__;
        for(int i = 0; i < n-1; i++){
            int k = a[i+1] - a[i];
            if(k < min) min = k;
        }
        cout << min << endl;
    }
}