#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

bool prime[100000];

void sievePrime(){
	for(int i = 0; i <= 100000; i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(100000); i++){
		if(prime[i]){
			for(int j = i*i; j <= 100000; j+=i){
				prime[j] = false;
			}
		}
	}
}

int main(){
	sievePrime();
	test(){
		int l, r; cin >> l >> r;
		int res = 0;
		for(int i = l; i <= r; i++){
			if(prime[i] == true){
				res++;
			}
		}
		cout << res << endl;
	}
}