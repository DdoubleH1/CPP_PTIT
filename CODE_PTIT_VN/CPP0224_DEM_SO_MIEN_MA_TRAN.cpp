#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int n, m;
int a[105][105];
bool visited[105][105];
int di[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dj[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j){
	visited[i][j] = true;
	for(int k = 0; k < 8; k++){
		int i1 = i + di[k];
		int j1 = j + dj[k];
		if(i1 >= 0 && i1 <= n-1 && j1 >= 0 && j1 <= m-1 && a[i1][j1] == 1 && !visited[i1][j1])
			dfs(i1, j1);
	}
}

int main(){
	test(){
		cin >> n >> m;
		for(int i = 0 ; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		memset(visited, false, sizeof(visited));
		int res = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] == 1 && !visited[i][j]){
					dfs(i, j);
					res++;
				}
			}
		}
		cout << res << endl;
	}
}