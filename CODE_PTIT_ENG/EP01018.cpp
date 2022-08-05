#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll Ucln(ll a, ll b){
	if (b==0) return a;
	return Ucln(b, a%b);
}

ll sum_digits(ll n){
	ll temp = n;
	ll sum = 0;
	while(temp){
		int a = temp % 10;
		sum += a;
		temp /= 10;
	}
	return sum;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		while(Ucln(n, sum_digits(n)) < 2){
			n++;
		}
		cout << n << endl;
	}
}
