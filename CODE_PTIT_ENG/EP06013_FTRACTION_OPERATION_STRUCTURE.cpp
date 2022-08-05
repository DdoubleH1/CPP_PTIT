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
#define t T;


struct Fraction{
	ll tu, mau;	
};

void read_input(Fraction &a){
	cin >> a.tu >> a.mau;
}

void process(Fraction &a, Fraction &b){
	Fraction c;
	c.tu = (a.tu*b.mau + a.mau*b.tu);
	c.mau = a.mau*b.mau;
	ll k = __gcd(c.tu, c.mau);
	c.tu /= k; c.tu *= c.tu;
	c.mau /= k; c.mau *= c.mau;
	cout << c.tu << "/" << c.mau << " ";
	Fraction d;
	d.tu = a.tu*b.tu*c.tu;
	d.mau = a.mau*b.mau*c.mau;
	ll h = __gcd(d.tu, d.mau);
	d.tu /= h; d.mau /= h;
	cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}