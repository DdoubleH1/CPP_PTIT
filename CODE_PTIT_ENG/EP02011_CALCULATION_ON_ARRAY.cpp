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
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define test()    int t; cin >> t; while (t--)
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int a[65] = {0}, n;

ll mu(ll a, int b){
	ll res = 1;
	if(b == 0) return 1;
	for(int i = 1; i <= b; i++){
		res *= a;
		res %= mod;
	}
	return res;
}

void solve(){
	ll h = a[0]; int g = a[0];
	for(int i = 1; i < n; i++){
		h *= a[i];
		h %= mod;
		g = __gcd(g, a[i]);
	}
	cout << mu(h, g) << endl;
}

void input(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		input();
		solve();
	}
}