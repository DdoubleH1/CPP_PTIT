#include <iostream>
using namespace std;
typedef long long ll;

int check_digits(ll n){
	while(n){
		int a = n % 10;
		if(a % 2 != 0) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(n % 2 == 0){
			if(check_digits(n) == 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}
}