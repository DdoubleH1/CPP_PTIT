#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

ll n;
int prime[1000001];

//void sievePrime(){
//	for(int i = 0; i <= 1000001; i++){
//		prime[i] = 1;		
//	}
//	prime[0] = 0; prime[1] = 0;
//	for(int i = 2; i <= 1000; i++){
//		if(prime[i] == 1){
//			for(int j = i*i; j <= 1000001; j+=i){
//				prime[i] = 0;
//			}
//		}
//	}
//}

int checkPrime(int n){
    if(n<2) return 0;
    else{
        for(int i = 2; i<= sqrt(n); i++){
            if(n % i == 0) return 0;
        }
    }
    return 1;
}

int main(){
//	sievePrime();
	test(){
		cin >> n;
		int res = 0;
		for(int i = 2; i <= sqrt(n); i++){
			if(checkPrime(i) == 1) res++;
		}
		cout << res << endl;
	}
}