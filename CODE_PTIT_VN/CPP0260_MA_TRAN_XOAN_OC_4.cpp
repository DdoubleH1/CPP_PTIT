#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int main(){
	int n; cin >> n;
	vector<int> arrMem;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			arrMem.push_back(a[i][j]);
		}
	}
	int res[n][n];
	sort(arrMem.begin(), arrMem.end());
	int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
	int idx = 0;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			res[h1][i] = arrMem[idx];
			idx++;
		}
		h1++;
		for(int i = h1; i <= h2; i++){
			res[i][c2] = arrMem[idx];
			idx++;
		}
		c2--;
		if(c1 <= c2){
			for(int i = c2; i >= c1; i--){
				res[h2][i] = arrMem[idx];
				idx++;
			}
			h2--;
		}
		if(h1 <= h2){
			for(int i = h2; i >= h1; i--){
				res[i][c1] = arrMem[idx];
				idx++;
			}
			c1++;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}