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
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define test()    int t; cin >> t; while (t--)

void input(int *a, int n,  ll &back){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        back += a[i];
    }
}
// void output(int *a, int n, ll &back){
//     for(int i = 0; i < n; ++i){
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     cout << back << endl;
// }

int main(){
    test(){
        int n, m;
        cin >> n >> m;
        int size = (n > m) ? n : m;
        int a[size] = {0}, b[size] = {0};
        ll a_front = 0, b_front = 0, a_back = 0, b_back = 0, res = 0;
        input(a, n, a_back);
        input(b, m, b_back);
        // output(a, n, a_back);
        // output(b, m, b_back);
        for(int i = 0; i < size; i++){
            a_front += a[i], a_back -= a[i];
            b_front += b[i], b_back -= b[i];
            ll max_front = (a_front > b_front) ? a_front : b_front;
            ll max_back = (a_back > b_back) ? a_back : b_back;
            if(res < max_front + max_back) res = max_front + max_back;
        }
        cout << res << endl;
    }
}