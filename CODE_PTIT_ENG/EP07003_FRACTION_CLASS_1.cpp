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

void input(frac &a){
	cin >> a.tu >> a.mau;
}

void output(frac &a){
	ll k = __gcd(a.tu, a.mau);
	cout << a.tu/k << "/" << a.mau/k;
}

int main(){
	frac a;
	input(a);
	output(a);
}