#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int main(){
    int n, m, p; cin >> n >> m >> p;
    int a[n][m], b[m][p], c[n][p];
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i< m; i++){
        for(int j = 0; j< p; j++){
            cin >> b[i][j];
        }
    }
    
    for(int i = 0; i<n ; i++){
        for(int k = 0; k<p ; k++){
            c[i][k] = 0;
            for(int j = 0; j<m ; j++){
                c[i][k] = c[i][k] + a[i][j]*b[j][k];
            }
        }
    } 
    for(int i = 0; i< n; i++){
        for(int j = 0; j< p; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}