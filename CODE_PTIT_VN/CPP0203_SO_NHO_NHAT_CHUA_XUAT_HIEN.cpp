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

int a[1000005], n;
map<int, int> mp;

int main(){
    test(){
        cin >> n;
        int max = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > max) max = a[i];
            mp[a[i]]++;
        }
        for(int i = 1; i < 1000005; i++){
            if(mp[i] == 0){
                cout << i << endl;
                break;
            }
        }
        mp.clear();
    }
}