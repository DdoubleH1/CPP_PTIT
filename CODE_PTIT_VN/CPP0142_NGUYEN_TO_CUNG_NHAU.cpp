#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int checkPrime(int t){
	if(t < 2) return 0;
	else{
		for(int i = 2; i <= sqrt(t); i++){
			if(t % i == 0) return 0;
		}
	}
	return 1;
}

int main(){
	test(){
		int x; cin >> x;
		int t = 0;
		for(int i = 1; i <= x; i++){
			if(__gcd(i,x) == 1)
				t++;
		}
		if(checkPrime(t) == 1) cout << 1 << endl;
		else cout << 0 << endl;
	}
}