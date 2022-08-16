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
    int a[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }

    int count = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += a[i][j];
        }
        if(sum > 1) count++;
    }
    cout << count << endl;
}