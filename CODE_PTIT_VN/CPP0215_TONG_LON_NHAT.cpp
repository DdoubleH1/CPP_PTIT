#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		int n, m; cin >> n >> m;
		int size = (n>m) ? n : m;
		int a[size] = {0}, b[size] = {0};
		ll a_back = 0, b_back = 0, a_front = 0, b_front = 0;
		ll res = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			a_back += a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			b_back += b[i];
		}
		for(int i = 0; i < size; i++){
			a_front += a[i]; a_back -= a[i];
			b_front += b[i]; b_back -= b[i];
			ll max_front = (a_front > b_front) ? a_front : b_front;
			ll max_back = (a_back > b_back) ? a_back : b_back;
			if(res < max_front + max_back)
				res = max_front + max_back;
		}
		cout << res << endl;
	}
}