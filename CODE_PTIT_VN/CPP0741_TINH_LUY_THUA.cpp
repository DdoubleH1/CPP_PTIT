#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

ll pow(ll x, ll y,ll p){
	if(y == 0)
		return 1;
	ll a = pow(x, y/2, p);
	if(y % 2 == 0)
		return ((a%p)*(a%p))%p;
	else return ((a%p)*(a%p)*(x%p))%p;
}

int main(){
	test(){
		ll x, y; cin >> x >> y;
		ll p; cin >> p;
//		ll res = 1;
//		for(int i = 1; i <= y; i++){
//			res = (res*x)%p;
//		}
		cout << pow(x,y,x) << endl;
	}
}