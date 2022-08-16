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
    int n; cin >> n;
    int a[n];
    set<int> res;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        res.insert(a[i]);
    }

    for(auto x: res){
        cout << x << " ";
    }
}