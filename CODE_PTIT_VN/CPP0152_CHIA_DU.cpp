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
        int a, m;
        cin >> a >> m;
        int check = 0;
        for(int i = 0; i < m; i++){
            int k = i*a;
            if(k % m == 1){
                cout << i << endl;
                check = 1;
                break;
            }
        }
        if(check == 0) cout << -1 << endl;
    }

}