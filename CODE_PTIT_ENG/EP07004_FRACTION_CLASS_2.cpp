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

class frac{
	public:
		ll tu, mau;
};

void input(frac &a, frac &b){
	cin >> a.tu >> a.mau >> b.tu >> b.mau;
}

void output(frac &a, frac &b, frac &ans){
	ll k = __gcd(a.tu, a.mau);
	a.tu /= k; a.mau /= k;
	ll h = __gcd(b.tu, b.mau);
	b.tu /= h; b.mau /= h;
	ans.tu = a.tu * b.mau + b.tu * a.mau;
	ans.mau = a.mau * b. mau;
	cout << ans.tu / __gcd(ans.tu, ans.mau) << "/" << ans.mau / __gcd(ans.tu, ans.mau);
}

int main(){
	frac a, b, ans;
	input(a,b);
	output(a,b,ans);
}