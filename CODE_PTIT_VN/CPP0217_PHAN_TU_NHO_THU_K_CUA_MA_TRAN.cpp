#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int main(){
	test(){
		vector<int> res;
		int n, k; cin >> n >> k;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				res.push_back(a[i][j]);
			}
		}
		sort(res.begin(), res.end());
		cout << res[k-1] << endl;
	}
}