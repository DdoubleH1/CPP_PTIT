#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		stable_sort(a, a+n);
		long long res = 0;
		for(int i = 0; i < n-1; i++){
			int tmp = lower_bound(a+i, a+n, a[i] + k) - a;
			res += (tmp - i - 1);
		}
		cout << res << endl;
	}
}