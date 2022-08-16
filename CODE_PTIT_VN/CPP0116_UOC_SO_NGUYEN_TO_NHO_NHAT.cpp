#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

int n;
bool prime[10000];

void sievePrime(){
	for(int i = 0; i <= 10000; i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(10000); i++){
		if(prime[i]){
			for(int j = i*i; j <= 10000; j += i){
				prime[j] = false;
			}
		}
	}
}

int minPrimeGcd(int a){
	for(int i = 3; i <= sqrt(a); i+=2){
		if((prime[i] == true) && (a % i == 0))
			return i;
	}
	return a;
}

int main(){
	sievePrime();
	test(){
		cin >> n;
		for(int i = 1; i <= n; i++){
			if(i == 1) cout << 1 << " ";
			else if(i % 2 == 0) cout << 2 << " ";
			else cout << minPrimeGcd(i) << " ";
		}
		cout << endl;
//		cout << prime[5];
	}
}