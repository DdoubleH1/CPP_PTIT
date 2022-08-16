#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)

class PhanSo{
	public:
		long long tu, mau;
		PhanSo(long long tu, long long mau){
//			this->tu = tu;
//			this->mau = mau;
		}
		friend istream &operator>>(istream &in, PhanSo &p){
			in >> p.tu >> p.mau;
			return in;
		}
		void rutgon(){
			long long k = __gcd(tu, mau);
			tu /= k;
			mau/= k;
		}
		friend ostream &operator<<(ostream &out, PhanSo &p){
			out << p.tu << "/" << p.mau;
			return out;
		}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}