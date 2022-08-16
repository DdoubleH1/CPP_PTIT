#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		int n, m; cin >> n >> m;
		int a[n][m];
		vector<int> res;
		int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		while(h1 <= h2 && c1 <= c2){
			for(int i = c1; i <= c2; i++){
				res.push_back(a[h1][i]);
			}
			++h1;
			for(int i = h1; i <= h2; i++){
				res.push_back(a[i][c2]);
			}
			--c2;
			if(c1 <= c2){
				for(int i = c2; i >= c1; i--){
					res.push_back(a[h2][i]);
				}
				--h2;
			}
			if(h1 <= h2){
				for(int i = h2; i >= h1; i--){
					res.push_back(a[i][c1]);
				}
				++c1;
			}
		} 
		for(int i = 0; i < n*m; i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
}