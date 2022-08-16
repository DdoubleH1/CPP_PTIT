#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		if(m > n) swap(m,n);
		if(a>b) swap(a,b);
		set<int> res;
		for(int i = 1; i <= n/a; i++){
			if(a*i >= m && a*i <= n)
				res.insert(a*i);
			if(b*i >= m && b*i <= n)
				res.insert(b*i);
		}
		cout << res.size() << endl;
	}
}