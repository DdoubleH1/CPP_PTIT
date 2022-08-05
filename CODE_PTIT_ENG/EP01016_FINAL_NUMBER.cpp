#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int solve(ll n){
	int sum = 0;
	ll temp = n;
	while(temp){
		int a = temp % 10;
		sum += a;
		temp /= 10;
	}
	if(sum > 10) return solve(sum);
	else return sum; 
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << solve(n);
	}
}
