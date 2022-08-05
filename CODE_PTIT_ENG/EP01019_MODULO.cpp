#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));


int main(){
//	ll a, b, c, d;
//	cin >> a >> b >> c >> d;
//	ll k = __gcd(abs(a-b), abs())
	ll a[4];
	for(int i = 0; i < 4; i++){
		cin >> a[i];
	}
	sort(a, a+4);
	ll k = __gcd(a[1] - a[0], a[2]-a[1]);
	cout << __gcd(k, a[3]-a[2]);
}