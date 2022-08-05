#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define test()    int t; cin >> t; while (t--)

int di[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dj[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int a[100][100] = {};
int n, m;
bool visited[100][100];

void dfs(int i, int j){
    visited[i][j] = true;
    for(int k = 0; k < 8; k++){
        int i1 = i + di[k];
        int j1 = j + dj[k];
        if(i1 >= 0 && i1 < n & j1 >= 0 && j1 < m && a[i1][j1] == 1 &&!visited[i1][j1]){
            dfs(i1, j1);
        }
    }
}

void input(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    memset(visited, false, sizeof(visited));
}

void output(){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1 && !visited[i][j]){
                dfs(i, j);
                count++;
            }
        }
    }
    cout << count << endl;
}

int main(){
    test(){
        // memset(visited, false, sizeof(visited));
        input();
        output();
    }
}