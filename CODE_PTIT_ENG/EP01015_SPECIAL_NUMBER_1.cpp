#include <iostream>
#include <math.h>
using namespace std;

int check_prime(int sum){
	if(sum < 2) return 0;
	else if(sum == 2 || sum == 3) return 1;
	for(int i = 2; i<= sqrt(sum); i++){
		if(sum % i == 0) return 0;
	}
	return 1;
}

int sum_digits(long long n){
	int sum = 0;
	while(n){
		int a = n % 10;
		sum += a;
		n /= 10;
	}
	return sum;
}

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		if(check_prime(sum_digits(n)) == 1) cout << n << endl;
		else cout << -1 << endl	;
	}
}
