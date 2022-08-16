#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		int n, x; cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		ll res = 0; ll p = 1;
		for(int i = n-1; i >= 0; i--){
			res += a[i]*p;
			res %= mod;
			p*=x;
			p%=mod;
		}
		cout << res << endl;
	}
}