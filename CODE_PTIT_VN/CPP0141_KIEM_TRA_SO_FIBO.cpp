#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

void checkFibo(long long n){
    long long a1= 0 , a2=1;
    long long a = a1 + a2;
    while(a < n){
        a1 = a2;
        a2 = a;	
        a = a1 + a2;
   }
   if(n == a || n == 0) cout << "YES\n";
   else cout << "NO\n";
}

int main(){
	test(){
		ll n; cin >> n;
		checkFibo(n);
	}
}