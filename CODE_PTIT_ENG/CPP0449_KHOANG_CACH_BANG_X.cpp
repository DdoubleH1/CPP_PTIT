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
		sort(a, a+n);
		int flag = 0;
		for(int i = 0; i < n; i++){
			int find = binary_search(a, a+n, a[i]+x);
			if(find){
				cout << 1 << endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			cout << -1 << endl;
	}
}