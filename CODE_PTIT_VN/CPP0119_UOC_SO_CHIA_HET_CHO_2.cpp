#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)


int main(){
	test(){
		int n; cin >> n;
		int res = 0;
		if(n % 2 != 0){
			cout << 0 << endl;
			continue;
		}
		for(int i = 1; i <= sqrt(n); i++){
			if(n % i == 0){
				if(i % 2 == 0) res++;
				if((n/i) % 2 == 0 && (n/i) != i) res++;
			}
		}
		cout << res << endl;
	}
}