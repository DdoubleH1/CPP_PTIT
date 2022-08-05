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

char a[25][25];
int n;

void input(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
}

int solve(){
    int hori[25][25], verti[25][25];
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 'O'){
                hori[i][j] = 0;
                verti[i][j] = 0;
            }
            else{
                hori[i][j] = (j == 0) ? 1 : hori[i][j-1] + 1;
                verti[i][j] = (i == 0) ? 1 : verti[i-1][j] + 1;
            }
        }
    }

    for(int i = n-1; i > 0; i--) {
        for(int j = n-1; j > 0; j--) {
            int small = min(verti[i][j], hori[i][j]);
            while(small > max) {
                if(verti[i][j-small+1] >= small && hori[i-small+1][j] >= small) {
                    max = small;
                }
                small--;
            }
        }
    }
    return max;
}

int main(){
    test(){
        input();
        cout << solve() << endl;
    }
}