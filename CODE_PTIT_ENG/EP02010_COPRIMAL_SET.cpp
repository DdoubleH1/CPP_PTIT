#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));


int main(){
	int t; cin >> t;
	while(t--){
		ll n , m;
		cin >> n >> m;
		ll sum = 0;
		for(int i = 1; i <= n; i++){
			sum += i;
		}
		ll a, b;
		if((sum+m) % 2 == 0){
			a = (sum + m)/2;
			b = sum - a;
			if(__gcd(a, b) == 1) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		else cout << "No" << endl;
	}
}