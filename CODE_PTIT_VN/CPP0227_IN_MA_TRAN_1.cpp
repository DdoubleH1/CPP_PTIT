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
        int n; cin >> n;
        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }

        for(int i = 0; i<n; i++){
            if(i % 2 != 0){
                for(int j = n-1; j >= 0; j--){
                    cout << a[i][j] << " ";
                }
            }
            else {
                for(int j = 0; j<n; j++){
                    cout << a[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
}