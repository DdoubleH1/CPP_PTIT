#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin >> n;
	ll res = 0;
	while(n != 0){
		int a = n % 10;
		res = res * 10 + a;
		n /= 10; 
	}
	cout << res;
}
