#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int res = 0;
		stable_sort(a, a+n);
		for(int i = 0; i < n-2; i++){
			int tmp = lower_bound(a+i, a+n, (x+a[i])) - a;
			if((a[tmp] - a[i]) == x) res++;
		}
		if(res > 0)
			cout << res << endl;
		else {
			cout << -1 << endl;
		}
	}
}